from django.shortcuts import render
from django.contrib import messages
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from django.urls import reverse_lazy
from django.contrib.auth.views import LoginView
from django.views.generic import CreateView, UpdateView,DeleteView
from .forms import SignUpForm,MusicianForm
from .models import Musician
# Create your views here.
class UserLoginView(LoginView):
    template_name='musician/signup_login.html'

    def form_valid(self,form):
        messages.success(self.request,'You Have Logged In Successfully')
        return super().form_valid(form)
    
    def form_invalid(self,form):
        return super().form_invalid(form)
    
    def get_context_data(self,**kwargs):
        context=super().get_context_data(**kwargs)
        # context['form']=self.get_form()
        context['type']='Login'
        return context

    def get_success_url(self) -> str:
        return reverse_lazy('home')


class UserSignUpView(CreateView):
    template_name='musician/signup_login.html'
    form_class=SignUpForm

    def form_valid(self,form):
        messages.success(self.request,'You Have Signed up Successfully')
        return super().form_valid(form)

    def get_context_data(self,**kwargs):
        context=super().get_context_data(**kwargs)
        # context['form']=self.get_form()
        context['type']='SignUp'
        return context

    def get_success_url(self) -> str:
        return reverse_lazy('home')
    
@method_decorator(login_required,name='dispatch')
class AddMusicianView(CreateView):
    model=Musician
    form_class=MusicianForm
    template_name='musician/add_musician.html'
    success_url=reverse_lazy('add_album')
    def form_valid(self, form):
        messages.success(self.request,'You Have Successfully Added Musician')
        return super().form_valid(form)

@method_decorator(login_required,name='dispatch')
class EditMusicianView(UpdateView):
    model=Musician
    form_class=MusicianForm
    template_name="musician/add_musician.html"
    pk_url_kwarg='id'
    success_url=reverse_lazy('home')
    def form_valid(self,form):
        messages.warning(self.request,'Musician Edited Successfully')
        return super().form_valid(form)

@method_decorator(login_required,name='dispatch')
class DeleteMusicianView(DeleteView):
    model=Musician
    template_name="musician/delete_musician.html"
    pk_url_kwarg='id'
    success_url=reverse_lazy('home')