from django.db import models

# Create your models here.
class Author(models.Model):
    name=models.CharField(max_length=100)
    bio=models.TextField()
    phone_no=models.CharField(max_length=14)

    def __str__(self) -> str:
        return f"{self.name}"