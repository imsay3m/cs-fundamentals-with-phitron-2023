from django.urls import path
from .views import home, del_cookies, get_cookies, set_cookies,set_session,get_session,del_session
urlpatterns = [
    path('',home,name='home'),
    path('set_cookies/',set_cookies,name='set_cookies'),
    path('set_session/',set_session,name='set_session'),
    path('get_cookies/',get_cookies,name='get_cookies'),
    path('get_session/',get_session,name='get_session'),
    path('del_cookies/',del_cookies,name='del_cookies'),
    path('del_session/',del_session,name='del_session'),
]
