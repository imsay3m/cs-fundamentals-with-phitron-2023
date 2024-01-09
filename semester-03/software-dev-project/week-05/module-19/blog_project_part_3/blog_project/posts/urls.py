from django.urls import path
from .views import AddPost, DetailPost, EditPost,DeletePost
urlpatterns = [
    # path('add/',add_post,name='add_post'),
    path('add/',AddPost.as_view(),name='add_post'),
    # path('add/<int:id>',edit_post,name='edit_post'),
    path('add/<int:id>/',EditPost.as_view(),name='edit_post'),
    # path('delete/<int:id>',delete_post,name='delete_post'),
    path('delete/<int:id>/',DeletePost.as_view(),name='delete_post'),
    path('details/<int:id>/',DetailPost.as_view(),name='detail_post'),
]
