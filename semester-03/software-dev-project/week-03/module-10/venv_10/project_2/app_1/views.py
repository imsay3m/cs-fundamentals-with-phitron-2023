from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def appHome(request):
    # return HttpResponse("This is home page")
    return render(request,'app_1/home.html')