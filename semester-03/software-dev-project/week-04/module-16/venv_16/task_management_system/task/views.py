from django.shortcuts import redirect, render
from .forms import TaskForm
# Create your views here.
def add_task(request):
    if request.method=='POST':
        task_form=TaskForm(request.POST)
        if task_form.is_valid():
            task_form.save()
            return redirect('home')
    else:
        task_form=TaskForm()
    return render(request,'task/add_task.html',{'form':task_form})

from .models import Task

def edit_task(request,id):
    task=Task.objects.get(pk=id)
    task_form=TaskForm(instance=task)
    if request.method=='POST':
        task_form=TaskForm(request.POST,instance=task)
        if task_form.is_valid():
            task_form.save()
            return redirect('home')
    return render(request,'task/add_task.html',{'form':task_form})

def delete_task(request,id):
    task=Task.objects.get(pk=id)
    task.delete()
    return redirect('home')