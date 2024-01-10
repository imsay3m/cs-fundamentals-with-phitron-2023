from django.urls import path
from .views import AddAlbumView, EditAlbumView
urlpatterns = [
    path('add_album/',AddAlbumView.as_view(),name='add_album'),
    path('edit_album/<int:id>',EditAlbumView.as_view(),name='edit_album'),
]
