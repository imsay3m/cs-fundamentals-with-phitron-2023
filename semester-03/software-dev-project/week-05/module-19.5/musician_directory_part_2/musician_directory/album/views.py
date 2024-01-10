from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView
from .models import Album
from .forms import AlbumForm
from django.urls import reverse_lazy
from django.contrib import messages
# Create your views here.
@method_decorator(login_required,name='dispatch')
class AddAlbumView(CreateView):
    model = Album
    form_class = AlbumForm
    template_name = 'album/add_album.html'
    success_url = reverse_lazy('home')
    def form_valid(self,form):
        messages.success(self.request, "You Have Successfully Added Album")
        return super().form_valid(form)

@method_decorator(login_required,name='dispatch')
class EditAlbumView(UpdateView):
    model=Album
    form_class=AlbumForm
    template_name="album/add_album.html"
    pk_url_kwarg='id'
    success_url=reverse_lazy('home')
    def form_valid(self,form):
        messages.warning(self.request,'Album Edited Successfully')
        return super().form_valid(form)
