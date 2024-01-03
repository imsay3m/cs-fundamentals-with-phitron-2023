from .views import model_fields
from django.urls import  path

urlpatterns = [
    path('',model_fields,name='model'),
]