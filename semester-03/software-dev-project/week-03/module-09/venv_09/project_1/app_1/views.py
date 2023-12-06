from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def app_1Page(request):
    return HttpResponse("This Is app_1 page")

def coursesPage(request):
    return HttpResponse("This Is app_1 courses page")

def aboutPage(request):
    return HttpResponse("This Is app_1 about page")
