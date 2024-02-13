from rest_framework import serializers
from .models import AvailableTime,Specialization, Designation, Doctor, Review

class AvailableTimeSerializer(serializers.ModelSerializer):
    class Meta:
        model=AvailableTime
        fields='__all__'

class SpecializationSerializer(serializers.ModelSerializer):
    class Meta:
        model=Specialization
        fields='__all__'

class DesignationSerializer(serializers.ModelSerializer):
    class Meta:
        model=Designation
        fields='__all__'

class DoctorSerializer(serializers.ModelSerializer):
    # user=serializers.StringRelatedField(many=False)
    # availabletime=serializers.StringRelatedField(many=True)
    # specialization=serializers.StringRelatedField(many=True)
    # designation=serializers.StringRelatedField(many=True)
    class Meta:
        model=Doctor
        fields='__all__'

class ReviewSerializer(serializers.ModelSerializer):
    class Meta:
        model=Review
        fields='__all__'

