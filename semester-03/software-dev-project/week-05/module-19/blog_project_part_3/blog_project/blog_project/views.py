from django.shortcuts import render
from posts.models import Post
from categories.models import Category
def home(request,category_slug=None):
    data=Post.objects.all()
    if not category_slug==None:
        category=Category.objects.get(slug=category_slug)
        data=Post.objects.filter(category=category)
    categories=Category.objects.all()
    return render(request,'home.html',{'data':data,'categories':categories})