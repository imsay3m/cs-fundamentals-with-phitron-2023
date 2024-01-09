from django.contrib import messages
from django.shortcuts import redirect, render
from .forms import PostForm
from django.contrib.auth.decorators import login_required


# Create your views here.
def add_post(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            post_form = PostForm(request.POST)
            if post_form.is_valid():
                post_form.instance.author=request.user
                messages.success(request,'Post Added Successfully')
                post_form.save()
                return redirect("home")
        else:
            post_form = PostForm()
        return render(request, "posts/add_post.html", {"form": post_form})
    else:
        messages.error(request,'Please Login First')
        return redirect('login')


from .models import Post


def edit_post(request, id):
    if request.user.is_authenticated:
        post = Post.objects.get(pk=id)
        post_form = PostForm(instance=post)
        # print(post.title)
        if request.method == "POST":
            post_form = PostForm(request.POST, instance=post)
            if post_form.is_valid():
                post_form.instance.author=request.user
                # print(post_form.cleaned_data)
                messages.warning(request,'Post Edited Successfully')
                post_form.save()
                return redirect("user_profile")
        return render(request, "posts/add_post.html", {"form": post_form})
    else:
        messages.error(request,'Please Login First')
        return redirect('login')


def delete_post(request, id):
    if request.user.is_authenticated:
        post = Post.objects.get(pk=id)
        messages.error(request,'Post Deleted Successfully')
        post.delete()
        return redirect("user_profile")
    else:
        messages.error(request,'Please Login First')
        return redirect('login')
