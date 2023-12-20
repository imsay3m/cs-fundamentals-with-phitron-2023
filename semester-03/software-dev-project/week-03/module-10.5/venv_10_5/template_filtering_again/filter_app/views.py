from datetime import datetime
from django.shortcuts import render

# Create your views here.
def index(request):
    your_datetime_string = "2022-01-02T10:30:00"
    your_datetime = datetime.strptime(your_datetime_string, "%Y-%m-%dT%H:%M:%S")
    d={
        'num_messages1':4,
        'num_messages2':1,
        'your_datetime':your_datetime,
        'time_now':datetime.now(),
        'some_list':['a', 'b', 'c','d'],
        'person':[
            {'name': 'Joe', 'age': 31},
            {'name': 'Josh', 'age': 19},
            {'name': 'Dave', 'age': 22},
        ]
    }
    return render(request,'index.html',context=d)



# d={'author':'rahim'
#     ,'age':12,
#     'lst':['python','django','dbms'],
#     'val':'',
#     "courses":[
#         {
#             "id":1,
#             "name":"Python",
#             "fee":1500,
#         },
#         {
#             "id":2,
#             "name":"Django",
#             "fee":6000,
#         },
#         {
#             "id":3,
#             "name":"Databse",
#             "fee":2500,
#         }]
# }