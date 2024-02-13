from django.contrib.auth.models import User
from django.db import models
from patient.models import Patient

# Create your models here.
class AvailableTime(models.Model):
    name=models.CharField(max_length=100)
    def __str__(self):
        return self.name

class Specialization(models.Model):
    name=models.CharField(max_length=50)
    slug=models.SlugField()
    def __str__(self):
        return self.name
    
class Designation(models.Model):
    name=models.CharField(max_length=50)
    slug=models.SlugField()
    def __str__(self):
        return self.name


# One To Many--> Many part a Foreign key Add kori
class Doctor(models.Model):
    user=models.OneToOneField(User,on_delete=models.CASCADE)
    image=models.ImageField(upload_to='images/doctor')
    fee=models.IntegerField()
    meet_link=models.CharField(max_length=100)
    specialization=models.ManyToManyField(Specialization)
    designation=models.ManyToManyField(Designation)
    availabletime=models.ManyToManyField(AvailableTime)
    def __str__(self):
        return f"{self.user.first_name} {self.user.last_name}"


STAR_CHOICES=[
    ('⭐','⭐'),
    ('⭐⭐','⭐⭐'),
    ('⭐⭐⭐','⭐⭐⭐'),
    ('⭐⭐⭐⭐','⭐⭐⭐⭐'),
    ('⭐⭐⭐⭐⭐', '⭐⭐⭐⭐⭐'),
]

# One To Many--> Many part a Foreign key Add kori
class Review(models.Model):
    reviewer=models.ForeignKey(Patient,on_delete=models.CASCADE)
    doctor=models.ForeignKey(Doctor,on_delete=models.CASCADE)
    body=models.TextField()
    created_on=models.DateTimeField(auto_now_add=True)
    rating = models.CharField(choices=STAR_CHOICES,max_length=50)
    def __str__(self):
        return f"Patient: {self.reviewer.user.first_name}; Doctor: {self.doctor.user.first_name}"
    