from django.shortcuts import redirect, render
from .forms import AuthorForm
# Create your views here.
def add_author(request):
    if request.method=='POST':
        author_form=AuthorForm(request.POST)
        if author_form.is_valid():
            print(author_form.cleaned_data)
            author_form.save()
            return redirect('add_author')
    else:
        author_form=AuthorForm()
    return render(request,'authors/add_author.html',{'form':author_form})