from rest_framework import serializers
from .models import Patient
from django.contrib.auth.models import User

class UserSerializer(serializers.ModelSerializer):
    class Meta:
        model=User
        fields=['username','first_name','last_name','email']

class PatientSerializer(serializers.ModelSerializer):
    # user=UserSerializer(many=False)
    user=serializers.StringRelatedField(many=False)
    class Meta:
        model=Patient
        fields='__all__'