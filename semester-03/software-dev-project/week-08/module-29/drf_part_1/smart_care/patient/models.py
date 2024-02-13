from django.db import models
from django.contrib.auth.models import User
# Create your models here.

class Patient(models.Model):
    user=models.OneToOneField(User,on_delete=models.CASCADE)
    mobile_no=models.CharField(max_length=14)
    image=models.ImageField(upload_to='images/patient/')
    def __str__(self):
        return f"{self.user.first_name} {self.user.last_name}"
    