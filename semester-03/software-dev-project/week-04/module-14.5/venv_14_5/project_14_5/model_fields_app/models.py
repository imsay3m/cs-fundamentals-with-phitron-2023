from django.db import models
from datetime import datetime,date

# Create your models here.
class MyModel(models.Model):
    big_auto_field = models.BigAutoField(primary_key=True)
    email_field = models.EmailField()
    char_field = models.CharField(max_length=255)
    text_field = models.TextField()
    binary_field = models.BinaryField()
    boolean_field = models.BooleanField()
    date_time_field = models.DateTimeField(blank=True,null=True)
    decimal_field = models.DecimalField(max_digits=5, decimal_places=2)
    duration_field = models.DurationField(blank=True, null=True)
    integer_field = models.IntegerField()
    float_field = models.FloatField()
    time_field = models.TimeField(blank=True, null=True)

    def __str__(self) -> str:
        return f"{self.big_auto_field}-{self.email_field}"