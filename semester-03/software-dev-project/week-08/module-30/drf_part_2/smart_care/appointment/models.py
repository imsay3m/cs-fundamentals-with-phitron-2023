from django.db import models
from patient.models import Patient
from doctor.models import AvailableTime, Doctor
# Create your models here.

APPOINTMENT_STATUS=[
    ('Completed','Completed'),
    ('Pending', 'Pending'),
    ('Running','Running'),
]
APPOINTMENT_TYPE=[
    ('Online','Online'),
    ('Offline','Offline'),
]
class Appointment(models.Model):
    patient=models.ForeignKey(Patient,on_delete=models.CASCADE)
    doctor = models.ForeignKey(Doctor, on_delete=models.CASCADE)
    appointment_status=models.CharField(choices=APPOINTMENT_STATUS,default='Pending',max_length=10)
    appointment_type=models.CharField(choices=APPOINTMENT_TYPE, max_length=10)
    symptom=models.TextField()
    time=models.ForeignKey(AvailableTime,on_delete=models.CASCADE)
    cancel=models.BooleanField(default=False)
    def __str__(self):
        return f"Patient: {self.patient.user.first_name}; Doctor: {self.doctor.user.first_name}"