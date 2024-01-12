from django.shortcuts import redirect
from django.views.generic import DetailView
from carlistings.forms import CommentForm
from .models import Car,Comment
from django.contrib import messages
# Create your views here.

class CarDetail(DetailView):
    model=Car
    pk_url_kwarg='id'
    template_name="carlistings/car_details.html"

    def post(self,request,*args,**kwargs):
        comment_form=CommentForm(data=self.request.POST)
        car=self.get_object()
        if comment_form.is_valid():
            new_comment=comment_form.save(commit=False)
            new_comment.car=car
            messages.success(request,'You Have Succcessfully Commented')
            new_comment.save()
        return self.get(request,*args,**kwargs)
    
    def get_context_data(self, **kwargs):
        context=super().get_context_data(**kwargs)
        car=self.object
        comments=car.comments.all()
        comment_form=CommentForm()
        context['comments']=comments
        context['form']=comment_form
        return context


def buy_car(request,id):
    car=Car.objects.get(pk=id)
    if car.quantity > 0:
        car.buyer.add(request.user)
        car.quantity -= 1
        messages.success(request,'You Have Successfully Bought The Car')
        car.save()
    else:
        messages.error(request,'Sorry! The Car Has Already Been Sold Out')
    return redirect("profile")