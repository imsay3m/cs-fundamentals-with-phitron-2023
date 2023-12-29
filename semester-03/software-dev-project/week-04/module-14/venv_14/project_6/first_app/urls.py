from django.urls import path
from .views import index,delete_student

urlpatterns = [
    path('',index,name='index'),
    path('delete/<int:roll>',delete_student, name='delete_student')
]
