from django.shortcuts import redirect, render
from .forms import CategoryForm
# Create your views here.
def add_category(request):
    if request.method=='POST': # user post requested
        category_form=CategoryForm(request.POST) # capturing the post request data 
        if category_form.is_valid():#checking the validity of post request data
            print(category_form.cleaned_data)
            category_form.save() # saving the post requested data into the database
            return redirect('add_category')
    else: # user get requested
        category_form=CategoryForm()
    return render(request,'categories/add_category.html',{'form':category_form})