from django.urls import path
from .views import (about,contact)


urlpatterns = [
    path('about/',about),
    path('contact/',contact)
]
