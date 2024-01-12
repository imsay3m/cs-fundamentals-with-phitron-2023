from django.contrib.auth.decorators import login_required
from django.contrib.auth.models import User
from django.contrib.auth.views import LoginView
from django.views.generic import CreateView,UpdateView
from django.contrib import messages
from django.urls import reverse_lazy
from django.shortcuts import render
from .forms import SignUpForm,EditProfileForm
from carlistings.models import Car
# Create your views here.
class UserLoginView(LoginView):
    template_name='accounts/signup_login.html'

    def form_valid(self,form):
        messages.success(self.request,'You Have Logged In Successfully')
        return super().form_valid(form)
    
    def form_invalid(self,form):
        return super().form_invalid(form)
    
    def get_context_data(self,**kwargs):
        context=super().get_context_data(**kwargs)
        context['type']='Login'
        return context

    def get_success_url(self) -> str:
        return reverse_lazy('home')


class UserSignUpView(CreateView):
    template_name='accounts/signup_login.html'
    form_class=SignUpForm

    def form_valid(self,form):
        messages.success(self.request,'You Have Signed up Successfully')
        return super().form_valid(form)

    def get_context_data(self,**kwargs):
        context=super().get_context_data(**kwargs)
        context['type']='SignUp'
        return context

    def get_success_url(self) -> str:
        return reverse_lazy('home')

@login_required
def user_profile(request):
    data=Car.objects.filter(buyer=request.user)
    return render(request,'accounts/user_profile.html',{'data':data})

class EditProfileView(UpdateView):
    model=User
    form_class=EditProfileForm
    template_name="accounts/edit_profile.html"
    success_url=reverse_lazy('profile')
    pk_url_kwarg='id'
    def form_valid(self,form):
        messages.warning(self.request,'Profile Edited Successfully')
        return super().form_valid(form)