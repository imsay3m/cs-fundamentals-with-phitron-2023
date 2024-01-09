from django.contrib import messages
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.forms import (
    AuthenticationForm,
    PasswordChangeForm,
    SetPasswordForm,
)
from django.shortcuts import redirect, render

from .forms import ChangeUserForm, RegisterForm

# Create your views here.


def sign_up(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            register_form = RegisterForm(request.POST)
            if register_form.is_valid():
                messages.success(request, "Account Created Succesfully")
                register_form.save()
                print(register_form.cleaned_data)
                return redirect("login")
        else:
            register_form = RegisterForm()
        return render(request, "first_app/signup.html", {"form": register_form})
    else:
        return redirect("profile")


def log_in(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            login_form = AuthenticationForm(request=request, data=request.POST)
            if login_form.is_valid():
                username = login_form.cleaned_data["username"]
                userpass = login_form.cleaned_data["password"]
                user = authenticate(
                    username=username, password=userpass
                )  # checking whether user is in the database
                if user is not None:
                    login(request, user)
                    return redirect("profile")
        else:
            login_form = AuthenticationForm()
        return render(request, "first_app/login.html", {"form": login_form})
    else:
        messages.warning(request, "Already logged In")
        return redirect("profile")


def profile(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            user_form = ChangeUserForm(request.POST, instance=request.user)
            if user_form.is_valid():
                messages.success(request, "Account updated successfully")
                user_form.save()
        else:
            user_form = ChangeUserForm(instance=request.user)
        return render(request, "first_app/profile.html", {"form": user_form})
    else:
        return redirect("login")


def log_out(request):
    if request.user.is_authenticated:
        messages.info(request, "You Have Logged Out Successfully")
        logout(request)
        return redirect("login")
    else:
        messages.error(request, "Please Log In First")
        return redirect("login")


def change_pass(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            pass_form = PasswordChangeForm(user=request.user, data=request.POST)
            if pass_form.is_valid():
                pass_form.save()
                update_session_auth_hash(
                    request, pass_form.user
                )  # pass will get updated
                messages.success(request, "Password Changed Successfully")
                return redirect("profile")
        else:
            pass_form = PasswordChangeForm(user=request.user)
        return render(request, "first_app/changepass.html", {"form": pass_form})
    else:
        messages.warning(request, "Please Log In to Your Account")
        return redirect("login")


def change_pass_old(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            pass_form = SetPasswordForm(user=request.user, data=request.POST)
            if pass_form.is_valid():
                pass_form.save()
                update_session_auth_hash(
                    request, pass_form.user
                )  # pass will get updated
                messages.success(
                    request, "Password Changed Without Old Password Successfully"
                )
                return redirect("profile")
        else:
            pass_form = SetPasswordForm(user=request.user)
        return render(request, "first_app/changepassold.html", {"form": pass_form})
    else:
        messages.warning(request, "Please Log In to Your Account")
        return redirect("login")
