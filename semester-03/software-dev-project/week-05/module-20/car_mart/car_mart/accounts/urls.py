from django.contrib.auth.views import LogoutView
from .views import EditProfileView, UserLoginView,UserSignUpView, user_profile
from django.urls import path


urlpatterns = [
    path('signup/',UserSignUpView.as_view(),name='signup'),
    path('login/',UserLoginView.as_view(),name='login'),
    path('logout/',LogoutView.as_view(),name='logout'),
    path('profile/',user_profile,name='profile'),
    path('edit/<int:id>/',EditProfileView.as_view(),name='edit_profile'),
]
