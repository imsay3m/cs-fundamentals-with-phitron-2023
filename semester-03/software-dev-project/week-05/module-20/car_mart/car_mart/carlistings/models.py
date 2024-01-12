from django.db import models
from django.contrib.auth.models import User

# Create your models here.
class Brand(models.Model):
    name=models.CharField(max_length=100)
    slug=models.SlugField(max_length=100,unique=True,blank=True,null=True)

    def __str__(self) -> str:
        return self.name

class Car(models.Model):
    model = models.CharField(max_length=100)
    description = models.TextField(max_length=335)
    quantity = models.PositiveIntegerField(default=0)
    price = models.PositiveIntegerField()
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE)#A single Brand can have multiple Car and A Car can have a single Brand
    image = models.ImageField(upload_to='carlistings/media/car_images/')
    buyer=models.ManyToManyField(User,blank=True,null=True)

    def __str__(self):
        return f"{self.brand}-{self.model}"

class Comment(models.Model):
    car=models.ForeignKey(Car,on_delete=models.CASCADE,related_name="comments")
    name=models.CharField(max_length=100)
    email=models.EmailField()
    body=models.TextField()
    created_on=models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"Commented By {self.name}"