from django.shortcuts import redirect, render
from .models import Student

# Create your views here.
def index(request):
    student=Student.objects.all()
    # print(student)
    return render(request,'first_app/index.html',{'data':student})

def delete_student(request,roll):
    std=Student.objects.get(pk=roll).delete()
    return redirect('index')