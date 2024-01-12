from django.shortcuts import render
from carlistings.models import Car,Brand

def home(request,brand_slug=None):
    data=Car.objects.all()
    if not brand_slug==None:
        brands=Brand.objects.get(slug=brand_slug)
        data=Car.objects.filter(brand=brands)
    brands=Brand.objects.all()
    return render(request,'home.html',{'data':data,'brands':brands})
