from django.urls import reverse_lazy
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView,UpdateView,DeleteView,DetailView
from django.contrib import messages
# from django.shortcuts import redirect, render
from .forms import CommentForm, PostForm
from .models import Post


# Create your views here.
""" def add_post(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            post_form = PostForm(request.POST)
            if post_form.is_valid():
                post_form.instance.author = request.user
                messages.success(request, "Post Added Successfully")
                post_form.save()
                return redirect("home")
        else:
            post_form = PostForm()
        return render(request, "posts/add_post.html", {"form": post_form})
    else:
        messages.error(request, "Please Login First")
        return redirect("login") """

#Add post using class based view
@method_decorator(login_required,name='dispatch')
class AddPost(CreateView):
    model=Post
    form_class=PostForm
    template_name="posts/add_post.html"
    success_url=reverse_lazy('home')
    def form_valid(self, form):
        messages.success(self.request, "Post Added Successfully")
        form.instance.author=self.request.user
        return super().form_valid(form)

""" def edit_post(request, id):
    if request.user.is_authenticated:
        post = Post.objects.get(pk=id)
        post_form = PostForm(instance=post)
        # print(post.title)
        if request.method == "POST":
            post_form = PostForm(request.POST, instance=post)
            if post_form.is_valid():
                post_form.instance.author = request.user
                # print(post_form.cleaned_data)
                messages.warning(request, "Post Edited Successfully")
                post_form.save()
                return redirect("user_profile")
        return render(request, "posts/add_post.html", {"form": post_form})
    else:
        messages.error(request, "Please Login First")
        return redirect("login") """
#Update post using class based view
@method_decorator(login_required,name='dispatch')
class EditPost(UpdateView):
    model = Post
    form_class=PostForm
    template_name = "posts/add_post.html"
    pk_url_kwarg='id'
    success_url=reverse_lazy('user_profile')
    def form_valid(self, form):
        messages.warning(self.request, "Post Edited Successfully")
        return super().form_valid(form)


""" def delete_post(request, id):
    if request.user.is_authenticated:
        post = Post.objects.get(pk=id)
        messages.error(request, "Post Deleted Successfully")
        post.delete()
        return redirect("user_profile")
    else:
        messages.error(request, "Please Login First")
        return redirect("login") """

#Delete post using class based view
@method_decorator(login_required,name='dispatch')
class DeletePost(DeleteView):
    model = Post
    template_name = "posts/delete_post.html"
    pk_url_kwarg='id'
    success_url=reverse_lazy('user_profile')

class DetailPost(DetailView):
    model=Post
    pk_url_kwarg='id'
    template_name="posts/post_details.html"

    def post(self,request,*args,**kwargs):
        comment_form=CommentForm(data=self.request.POST)
        post=self.get_object()
        if comment_form.is_valid():
            new_comment=comment_form.save(commit=False)
            new_comment.post=post
            messages.success(request,'Succcessfully Commented')
            new_comment.save()
        return self.get(request,*args,**kwargs)
    
    def get_context_data(self,**kwargs):
        context=super().get_context_data(**kwargs)
        post=self.object
        comments=post.comments.all()
        comment_form=CommentForm()
        context['comments']=comments
        context['comment_form']=comment_form
        return context