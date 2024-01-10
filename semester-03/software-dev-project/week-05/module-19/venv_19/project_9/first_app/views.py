from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime,timedelta
# Create your views here.
def home(request):
    return render(request,'first_app/home.html')

def set_cookies(request):
    response=render(request,'first_app/set_cookies.html')
    response.set_cookie('name','rahim')
    # response.set_cookie('name','karim',max_age=60*3)
    response.set_cookie('name','karim',expires=datetime.utcnow()+timedelta(days=7))
    return response

def get_cookies(request):
    name=request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request,'first_app/get_cookies.html',{'name':name})

def del_cookies(request):
    response=render(request,'first_app/del_cookies.html')
    response.delete_cookie('name')
    return response

def set_session(request):
    data={
        'name':'rahim',
        'age':23,
        'language':'bangla'
    }
    request.session.update(data)
    return render(request,'first_app/set_session.html')

def get_session(request):
    if 'name' in request.session:
        data=request.session
        request.session.modified=True #extend the time by every get request
        return render(request,'first_app/get_session.html',{'data':data})
    else:
        return HttpResponse("Your Session Has been Expired")

def del_session(request):
    request.session.flush()
    return render(request,'first_app/del_session.html')