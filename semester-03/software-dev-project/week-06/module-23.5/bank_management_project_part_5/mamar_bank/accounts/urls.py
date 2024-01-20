from django.urls import path
from .views import UserLoginView, UserLogoutView, UserRegistrationView,UserUpdateView,UserPasswordChangeView
urlpatterns = [
    path('register/',UserRegistrationView.as_view(),name='register'),
    path('login/',UserLoginView.as_view(),name='login'),
    path('logout/',UserLogoutView.as_view(),name='logout'),
    path('profile/',UserUpdateView.as_view(),name='profile'),
    path('change_password/',UserPasswordChangeView.as_view(),name='change_password'),
]
