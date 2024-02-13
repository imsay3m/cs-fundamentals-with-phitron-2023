from django.contrib import admin
from .models import AvailableTime,Designation,Specialization,Doctor,Review
# Register your models here.

admin.site.register(AvailableTime)
class DesignationAdminModel(admin.ModelAdmin):
    prepopulated_fields={'slug':('name',)}
admin.site.register(Designation,DesignationAdminModel)
class SpecializationAdminModel(admin.ModelAdmin):
    prepopulated_fields={'slug':('name',)}
admin.site.register(Specialization,SpecializationAdminModel)
admin.site.register(Doctor)
admin.site.register(Review)
