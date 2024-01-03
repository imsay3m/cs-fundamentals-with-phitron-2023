from django.shortcuts import render
from .forms import ExampleForm
# Create your views here.
def form_fields(request):
    if request.method=='POST':
        form=ExampleForm(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
        return render(request,'form_fields_app/form.html',{'form':form})
    else:
        form=ExampleForm()
        return render(request,'form_fields_app/form.html',{'form':form})
