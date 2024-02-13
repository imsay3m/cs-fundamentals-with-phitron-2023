from rest_framework.routers import DefaultRouter
from django.urls import include,path
from .views import PatientViewSet

router=DefaultRouter()
router.register('list',PatientViewSet)

urlpatterns = [
    path('',include(router.urls)),
]
