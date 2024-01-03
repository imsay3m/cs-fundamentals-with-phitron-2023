from django.shortcuts import redirect, render
from .forms import ProfileForm
# Create your views here.
def add_profile(request):
    if request.method=='POST':
        profile_form=ProfileForm(request.POST)
        if profile_form.is_valid():
            print(profile_form.cleaned_data)
            profile_form.save()
            redirect('add_profile')
    else:
        profile_form=ProfileForm()    
    return render(request,'profiles/add_profile.html',{'form':profile_form})