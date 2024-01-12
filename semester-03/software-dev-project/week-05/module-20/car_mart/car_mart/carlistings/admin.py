from django.contrib import admin
from .models import Brand, Car, Comment
# Register your models here.

class BrandAdmin(admin.ModelAdmin):
    prepopulated_fields={'slug':('name',)}
    list_display=['name','slug']

admin.site.register(Brand,BrandAdmin)
admin.site.register(Comment)
admin.site.register(Car)