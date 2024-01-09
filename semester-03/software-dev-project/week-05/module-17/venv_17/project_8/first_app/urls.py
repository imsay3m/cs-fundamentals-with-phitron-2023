from django.urls import path
from .views import change_pass, log_out,sign_up,log_in,profile,change_pass_old
urlpatterns=[
    path('signup/',sign_up,name='signup'),
    path('login/',log_in ,name='login'),
    path('logout/',log_out ,name='logout'),
    path('profile/',profile ,name='profile'),
    path('changepass/',change_pass ,name='changepass'),
    path('changepassold/',change_pass_old ,name='changepassold'),
]