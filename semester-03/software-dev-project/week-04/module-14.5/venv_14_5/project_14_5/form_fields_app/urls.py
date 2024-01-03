from .views import form_fields
from django.urls import  path

urlpatterns = [
    path('',form_fields,name='form'),
]
