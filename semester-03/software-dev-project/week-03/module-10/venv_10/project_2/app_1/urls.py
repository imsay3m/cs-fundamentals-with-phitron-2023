from django.urls import path
from .views import appHome
urlpatterns = [
    path('',appHome),
]
