from rest_framework.routers import DefaultRouter
from django.urls import path, include
from .views import AvailableTimeViewSet,SpecializationViewSet,DesignationViewSet,DoctorViewSet,ReviewViewSet

router=DefaultRouter()
router.register('available_time',AvailableTimeViewSet)
router.register('specialization',SpecializationViewSet)
router.register('designation',DesignationViewSet)
router.register('list',DoctorViewSet)
router.register('review',ReviewViewSet)


urlpatterns = [
    path('',include(router.urls)),
]
