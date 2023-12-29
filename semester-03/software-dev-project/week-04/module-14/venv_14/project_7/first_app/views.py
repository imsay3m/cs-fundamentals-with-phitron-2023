from django.shortcuts import render
from .forms import StudentForm

# Create your views here.
def index(request):
    data=False
    if request.method=='POST':
        form=StudentForm(request.POST)
        if form.is_valid():
            form.save() #!commit=False
            data=form.cleaned_data
            print(form.cleaned_data)
    else:
        form=StudentForm()
    return render(request,'first_app/index.html',{'form':form,'data':data})
