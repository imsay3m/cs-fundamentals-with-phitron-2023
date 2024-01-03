from django.urls import path
from .views import add_musician,edit_musician,delete_musician
urlpatterns = [
    path('add/',add_musician,name='add_musician'),
    path('edit/<int:id>',edit_musician,name='edit_musician'),
    path('delete/<int:id>',delete_musician,name='delete_musician'),
]