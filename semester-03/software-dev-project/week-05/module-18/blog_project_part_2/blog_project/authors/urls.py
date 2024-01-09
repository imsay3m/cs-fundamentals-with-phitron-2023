from django.urls import path
from .views import change_pass, register,user_login,user_logout, user_profile,edit_profile
urlpatterns = [
    path('register/',register,name='register'),
    path('login/',user_login,name='login'),
    path('logout/',user_logout,name='logout'),
    path('profile/',user_profile,name='user_profile'),
    path('profile/edit/',edit_profile,name='edit_profile'),
    path('profile/edit/change_password/',change_pass,name='change_pass'),
]
