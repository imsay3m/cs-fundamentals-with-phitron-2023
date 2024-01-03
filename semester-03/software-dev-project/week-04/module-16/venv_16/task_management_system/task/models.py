from django.db import models
from category.models import Category
# Create your models here.
class Task(models.Model):
    title=models.CharField(max_length=100)
    description=models.TextField()
    completed = models.BooleanField(default=False)
    assign_date=models.DateField()
    categories=models.ManyToManyField(Category)

    def __str__(self) -> str:
        return f"{self.title}-{self.assign_date}"