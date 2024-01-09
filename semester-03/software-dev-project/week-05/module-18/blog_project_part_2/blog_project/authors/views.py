from .forms import RegistrationForm,ChangeUserDataForm
from django.shortcuts import redirect, render
from django.contrib import messages
from django.contrib.auth import authenticate,login, logout, update_session_auth_hash
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth.decorators import login_required
from posts.models import Post
# Create your views here.

def register(request):
    if not request.user.is_authenticated:
        if request.method=='POST':
            register_form=RegistrationForm(request.POST)
            if register_form.is_valid():
                messages.success(request,'Account Registered Successfully')
                register_form.save()
                return redirect('login')
        else:
            register_form=RegistrationForm()
        return render(request,'authors/register_login.html',{'form':register_form,'type':'Register'})
    else:
        messages.error(request,'You are already Logged In')
        return redirect('home')
def user_login(request):
    if not request.user.is_authenticated:
        if request.method=='POST':
            login_form=AuthenticationForm(request,request.POST)
            if login_form.is_valid():
                user_name=login_form.cleaned_data['username']
                user_pass=login_form.cleaned_data['password']
                user=authenticate(username=user_name,password=user_pass)
                if user is not None:
                    messages.success(request,'You Have Logged In Successfully')
                    login(request,user)
                    return redirect('user_profile')
                else:
                    messages.error(request,'Please Register First')
                    return redirect('register')
        else:
            login_form=AuthenticationForm()
        return render(request,'authors/register_login.html',{'form':login_form,'type':'Login'})
    else:
        messages.error(request,'You are already Logged In')
        return redirect('home')

def user_logout(request):
    if not request.user.is_authenticated:
        messages.error(request,'Please Log In First')
        return redirect('login')
    else:
        messages.warning(request,'You have Logged Out Successfully')
        logout(request)
        return redirect('home')

@login_required
def user_profile(request):
    data=Post.objects.filter(author=request.user)
    return render(request,'authors/user_profile.html',{'data':data})
@login_required
def edit_profile(request):
    if request.method=="POST":
        profile_form=ChangeUserDataForm(request.POST,instance=request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.warning(request,'Profile Updated Successfully')
            return redirect('user_profile')
    else:
        profile_form=ChangeUserDataForm(instance=request.user)
    return render(request,'authors/edit_profile.html',{'form':profile_form})

def change_pass(request):
    if request.user.is_authenticated:
        if request.method=='POST':
            change_pass_form=PasswordChangeForm(request.user,request.POST)
            if change_pass_form.is_valid():
                messages.warning(request,'Password Changed Successfully')
                change_pass_form.save()
                update_session_auth_hash(request,change_pass_form.user)
                return redirect('user_profile')
        else:
            change_pass_form=PasswordChangeForm(request.user)
        return render(request,'authors/change_password.html',{'form':change_pass_form})
    else:
        messages.error(request,'Please Login First')
        return redirect('login')