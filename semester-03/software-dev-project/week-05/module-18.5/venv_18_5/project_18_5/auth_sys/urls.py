from django.urls import path
from .views import user_login,user_signup,user_logout,change_pass_with_old,change_pass_without_old

urlpatterns = [
    path('signup/',user_signup,name='signup'),
    path('login/',user_login,name='login'),
    path('logout/',user_logout,name='logout'),
    path('change_password/',change_pass_with_old,name='changepass'),
    path('change_password_without_old_password/',change_pass_without_old,name='changepasswithoutold'),
]
