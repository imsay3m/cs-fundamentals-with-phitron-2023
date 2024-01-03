from django.shortcuts import redirect, render

from .forms import PostForm


# Create your views here.
def add_post(request):
    if request.method == "POST":
        post_form = PostForm(request.POST)
        if post_form.is_valid():
            print(post_form.cleaned_data)
            post_form.save()
            return redirect("home")
    else:
        post_form = PostForm()
    return render(request, "posts/add_post.html", {"form": post_form})


from .models import Post


def edit_post(request, id):
    post = Post.objects.get(pk=id)
    post_form = PostForm(instance=post)
    # print(post.title)
    if request.method == "POST":
        post_form = PostForm(request.POST, instance=post)
        if post_form.is_valid():
            # print(post_form.cleaned_data)
            post_form.save()
            return redirect("home")
    return render(request, "posts/add_post.html", {"form": post_form})


def delete_post(request, id):
    post = Post.objects.get(pk=id)
    post.delete()
    return redirect("home")
