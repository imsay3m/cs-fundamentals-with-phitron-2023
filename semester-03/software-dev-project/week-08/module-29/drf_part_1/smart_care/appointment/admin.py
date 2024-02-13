from django.contrib import admin
from .models import Appointment
# Register your models here.
class AppointmentAdmin(admin.ModelAdmin):
    list_display=['doctor_name','patient_name','appointment_status','appointment_type','symptom','time','cancel']
    def doctor_name(self,obj):
        return obj.doctor.user.first_name
    def patient_name(self,obj):
        return obj.patient.user.first_name
admin.site.register(Appointment,AppointmentAdmin)