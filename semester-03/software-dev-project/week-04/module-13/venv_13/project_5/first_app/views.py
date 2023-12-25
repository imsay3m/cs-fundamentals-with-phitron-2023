from django.shortcuts import render
from .forms import contactForm,studentData,passwordValidationProject

# Create your views here.
def index(request):
    return render(request,'first_app/index.html')

def about(request):
    if request.method=='POST':
        print(request.POST)
        name=request.POST.get('username')
        email=request.POST.get('email')
        select=request.POST.get('select')
        return render(request,'first_app/about.html',{'name':name,'email':email,'select':select})
    else:
        return render(request,'first_app/about.html')
    # return render(request,'first_app/about.html')

def form(request):
    print(request.POST)
    if request.method=='POST':
        name=request.POST.get('username')
        email=request.POST.get('email')
        return render(request,'first_app/form.html',{'name':name,'email':email})
    return render(request,'first_app/form.html')

def django_form(request):
    if request.method=='POST':
        form=contactForm(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            return render(request,'first_app/django_form.html',{'form':form,'data':form.cleaned_data})
    else:
        form=contactForm()
    return render(request,'first_app/django_form.html',{'form':form})



    """ if request.method=='POST':
        form=contactForm(request.POST,request.FILES)
        if form.is_valid():
            file=form.cleaned_data['file']
            with open('first_app/uploads/'+file.name,'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
            return render(request,'first_app/django_form.html',{'form':form,'data':form.cleaned_data})
    else:
        form=contactForm()
    return render(request,'first_app/django_form.html',{'form':form}) """




    """ form=contactForm(request.POST,request.FILES)
    # inorder to get cleaned_data you have to do it inside the is_valid condition
    if form.is_valid():
        print(form.cleaned_data)
    return render(request,'first_app/django_form.html',{'form':form,'data':form.cleaned_data}) """


def studentForm(request):
    if request.method=='POST':
        form=studentData(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            return render(request,'first_app/django_form.html',{'form':form,'data':form.cleaned_data})
    else:
        form=studentData()
    return render(request,'first_app/django_form.html',{'form':form})


def passwordValidation(request):
    if request.method=='POST':
        form=passwordValidationProject(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
            return render(request,'first_app/django_form.html',{'form':form,'data':form.cleaned_data})
    else:
        form=passwordValidationProject()
    return render(request,'first_app/django_form.html',{'form':form})