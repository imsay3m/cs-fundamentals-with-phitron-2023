from django.shortcuts import redirect, render
from .forms import MusicianForm
# Create your views here.

def add_musician(request):
    if request.method=='POST':
        musician_form=MusicianForm(request.POST)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('add_album')
    else:
        musician_form=MusicianForm()
    return render(request,'musicians/add_musician.html',{'form':musician_form})

from .models import Musician
def edit_musician(request,id):
    musician=Musician.objects.get(pk=id)
    musician_form=MusicianForm(instance=musician)
    if request.method=='POST':
        musician_form=MusicianForm(request.POST,instance=musician)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('home')
    return render(request,'musicians/add_musician.html',{'form':musician_form})

def delete_musician(request,id):
    musician=Musician.objects.get(pk=id)
    musician.delete()
    return redirect('home')