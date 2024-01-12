from django.urls import path
from .views import CarDetail,buy_car
urlpatterns = [
    path('details/<int:id>/',CarDetail.as_view(),name='car_detail'),
    path('buy/<int:id>/',buy_car,name='buy_car'),
]
