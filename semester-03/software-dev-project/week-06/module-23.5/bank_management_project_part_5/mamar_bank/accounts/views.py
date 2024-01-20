from django.contrib.auth.decorators import login_required
from django.shortcuts import redirect, render
from django.urls import reverse_lazy
from django.utils.decorators import method_decorator
from django.views import View
from django.views.generic import FormView
from .forms import UserPasswordChangeForm, UserRegistrationForm, UserUpdateForm
from django.contrib.auth import login, logout
from django.contrib.auth.views import LoginView,LogoutView,PasswordChangeView
from django.core.mail import EmailMultiAlternatives
from django.template.loader import render_to_string
# Create your views here.

def send_pass_change_mail(user,subject,template):
    mail_subject=subject
    message=render_to_string(template,{
        'user':user,
        })
    send_email=EmailMultiAlternatives(mail_subject,'',to=[user.email])
    send_email.attach_alternative(message,"text/html")
    send_email.send()

class UserRegistrationView(FormView):
    template_name='accounts/user_registration.html'
    form_class=UserRegistrationForm
    success_url=reverse_lazy('profile')

    def form_valid(self,form):
        # print(form.cleaned_data)
        user=form.save()
        login(self.request,user)
        print(user)
        return super().form_valid(form)

class UserLoginView(LoginView):
    template_name="accounts/user_login.html"

    def get_success_url(self):
        return reverse_lazy('home')
    
@method_decorator(login_required, name='dispatch')
class UserLogoutView(LogoutView):
    def get_success_url(self):
        if self.request.user.is_authenticated:
            logout(self.request)
        return reverse_lazy('home')

class UserUpdateView(View):
    template_name = 'accounts/user_profile.html'

    def get(self, request):
        form = UserUpdateForm(instance=request.user)
        return render(request, self.template_name, {'form': form})

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')  # Redirect to the user's profile page
        return render(request, self.template_name, {'form': form})


@method_decorator(login_required, name='dispatch')
class UserPasswordChangeView(PasswordChangeView):
    form_class = UserPasswordChangeForm
    template_name = 'accounts/user_password_change.html'
    success_url = reverse_lazy('profile')

    def form_valid(self, form):
        subject = 'Password Change Successful'
        template = 'accounts/password_change_mail.html'
        send_pass_change_mail(self.request.user, subject, template)
        return super().form_valid(form)