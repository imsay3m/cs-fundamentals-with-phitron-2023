from datetime import date, datetime
from django.shortcuts import render

# Create your views here.
def home(request):
    d={'author':'rahim','age':12,'lst':['python','django','dbms'],'nowTime':datetime.utcnow(),'today':datetime.now(),'val':'',"courses":[
        {
            "id":1,
            "name":"Python",
            "fee":1500,
        },
        {
            "id":2,
            "name":"Django",
            "fee":6000,
        },
        {
            "id":3,
            "name":"Databse",
            "fee":2500,
        }
        ]
    }
    return render(request,'home.html',context=d)