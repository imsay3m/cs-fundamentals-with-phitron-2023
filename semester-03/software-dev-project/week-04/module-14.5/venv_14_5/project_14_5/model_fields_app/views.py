from django.shortcuts import render
from .forms import MyForm
# Create your views here.
def model_fields(request):
    if request.method=='POST':
        form=MyForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
    else:
        form=MyForm()
    return render(request,'model_fields_app/model.html',{'form':form})