from django.shortcuts import render
from rest_framework import viewsets
from .models import AvailableTime, Specialization, Designation, Doctor, Review
from .serializers import AvailableTimeSerializer, SpecializationSerializer, DesignationSerializer, DoctorSerializer, ReviewSerializer
# Create your views here.

class AvailableTimeViewSet(viewsets.ModelViewSet):
    queryset=AvailableTime.objects.all()
    serializer_class=AvailableTimeSerializer
    

class SpecializationViewSet(viewsets.ModelViewSet):
    queryset=Specialization.objects.all()
    serializer_class=SpecializationSerializer

class  DesignationViewSet(viewsets.ModelViewSet):
    queryset=Designation.objects.all()
    serializer_class = DesignationSerializer

class DoctorViewSet(viewsets.ModelViewSet):
    queryset=Doctor.objects.all()
    serializer_class = DoctorSerializer

class ReviewViewSet(viewsets.ModelViewSet):
    queryset=Review.objects.all()
    serializer_class = ReviewSerializer