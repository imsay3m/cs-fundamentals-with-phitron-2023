from django.views.generic import ListView
from album.models import Album

class HomeView(ListView):
    model = Album
    template_name = 'home.html'
    context_object_name = 'data'