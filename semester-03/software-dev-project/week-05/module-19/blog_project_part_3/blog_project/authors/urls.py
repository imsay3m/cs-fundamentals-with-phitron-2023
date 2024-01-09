from django.urls import path
from django.contrib.auth.views import LogoutView
from .views import UserLogin, change_pass, register,user_logout, user_profile,edit_profile
urlpatterns = [
    path('register/',register,name='register'),
    # path('login/',user_login,name='login'),
    path('login/',UserLogin.as_view(),name='login'),
    path('logout/',LogoutView.as_view(next_page='/'),name='logout'),
    path('profile/',user_profile,name='user_profile'),
    path('profile/edit/',edit_profile,name='edit_profile'),
    path('profile/edit/change_password/',change_pass,name='change_pass'),
]
