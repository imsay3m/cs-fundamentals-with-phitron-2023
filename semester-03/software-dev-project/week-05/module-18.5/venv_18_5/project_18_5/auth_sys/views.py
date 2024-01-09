from .forms import SignUpForm
from django.shortcuts import render,redirect
from django.contrib.auth import login, logout, authenticate,update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
# Create your views here.

def user_signup(request):
    if not request.user.is_authenticated:
        if request.method=='POST':
            signup_form=SignUpForm(request.POST)
            if signup_form.is_valid():
                messages.success(request,'Account Created Successfully')
                signup_form.save()
                return redirect('login')
        else:
            signup_form=SignUpForm()
        return render(request,'auth_sys/user_auth.html',{'form':signup_form,'type':'Sign Up'})
    else:
        messages.warning(request,'You Are Already Logged In')
        return redirect('profile')

def user_login(request):
    if not request.user.is_authenticated:
        if request.method=='POST':
            login_form=AuthenticationForm(request,request.POST)
            if login_form.is_valid():
                username=login_form.cleaned_data['username']
                userpass=login_form.cleaned_data['password']
                user=authenticate(username=username,password=userpass)
                if user is not None:
                    messages.success(request,'Logged In Successfully')
                    login(request,user)
                    return redirect('profile')
        else:
            login_form=AuthenticationForm()
        return render(request,'auth_sys/user_auth.html',{'form':login_form,'type':'Log In'})
    else:
        messages.warning(request,'You Are Already Logged In')
        return redirect('profile')

def user_logout(request):
    if not request.user.is_authenticated:
        messages.error(request,'Please Log In First')
        return redirect('login')
    else:
        messages.warning(request,'Logged Out Successfully')
        logout(request)
        return redirect('home')

def user_profile(request):
    if request.user.is_authenticated:
        return render(request,'auth_sys/user_profile.html')
    else:
        messages.error(request,'Please Login First')
        return redirect('login')

def change_pass_with_old(request):
    if request.user.is_authenticated:
        if request.method=='POST':
            change_pass_form=PasswordChangeForm(request.user,request.POST)
            if change_pass_form.is_valid():
                messages.warning(request,'Password Changed Succesfully')
                change_pass_form.save()
                update_session_auth_hash(request,change_pass_form.user)
                return redirect('profile')
        else:
            change_pass_form=PasswordChangeForm(request.user)
        return render(request,'auth_sys/change_password.html',{'form':change_pass_form})
    else:
        messages.error(request,'Please Login First')
        return redirect('login')

def change_pass_without_old(request):
    if request.user.is_authenticated:
        if request.method=='POST':
            change_pass_form=SetPasswordForm(request.user,request.POST)
            if change_pass_form.is_valid():
                messages.warning(request,'Password Changed Succesfully')
                change_pass_form.save()
                update_session_auth_hash(request,change_pass_form.user)
                return redirect('profile')
        else:
            change_pass_form=SetPasswordForm(request.user)
        return render(request,'auth_sys/change_password.html',{'form':change_pass_form})
    else:
        messages.error(request,'Please Login First')
        return redirect('login')