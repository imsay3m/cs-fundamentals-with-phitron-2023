from django.shortcuts import redirect, render
from .forms import AlubmForm
# Create your views here.
def add_album(request):
    if request.method=='POST':
        album_form=AlubmForm(request.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    else:
        album_form=AlubmForm()
    return render(request,'albums/add_album.html',{'form':album_form})

from .models import Album
def edit_album(request,id):
    album=Album.objects.get(pk=id)
    album_form=AlubmForm(instance=album)
    if request.method=='POST':
        album_form=AlubmForm(request.POST,instance=album)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    return render(request,'albums/add_album.html',{'form':album_form})

def delete_album(request,id):
    album=Album.objects.get(pk=id)
    album.delete()
    return redirect('home')