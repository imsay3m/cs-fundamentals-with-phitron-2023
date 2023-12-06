from django.urls import path
from .views import (coursesPage,aboutPage,app_1Page)
urlpatterns = [
    path("", app_1Page),
    path("courses/", coursesPage),
    path("about/", aboutPage),
]
