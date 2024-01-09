from django.shortcuts import redirect, render
from .forms import CategoryForm
from django.contrib import messages
# Create your views here.
def add_category(request):
    if request.method=='POST': # user post requested
        category_form=CategoryForm(request.POST) # capturing the post request data 
        if category_form.is_valid():#checking the validity of post request data
            messages.success(request,'Category added Successfully')
            category_form.save() # saving the post requested data into the database
            return redirect('add_category')
    else: # user get requested
        category_form=CategoryForm()
    return render(request,'categories/add_category.html',{'form':category_form})