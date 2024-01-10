from django.urls import path
from django.contrib.auth.views import LogoutView
from .views import UserSignUpView,UserLoginView,AddMusicianView,EditMusicianView,DeleteMusicianView
urlpatterns = [
    path('signup/',UserSignUpView.as_view(),name='signup'),
    path('login/',UserLoginView.as_view(),name='login'),
    path('logout/',LogoutView.as_view(),name='logout'),
    path('add_musician/',AddMusicianView.as_view(),name='add_musician'),
    path('edit_musician/<int:id>/',EditMusicianView.as_view(),name='edit_musician'),
    path('delete_musician/<int:id>/',DeleteMusicianView.as_view(),name='delete_musician'),

]
