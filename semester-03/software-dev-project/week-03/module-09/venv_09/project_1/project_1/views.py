from django.http import HttpResponse


def homePage(request):
    return HttpResponse("Hello World")

def contactPage(request):
    return HttpResponse("Welcome to contact page")
