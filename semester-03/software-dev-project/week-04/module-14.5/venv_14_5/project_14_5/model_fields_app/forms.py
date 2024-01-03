from django import forms
from .models import MyModel

class MyForm(forms.ModelForm):
    class Meta:
        model=MyModel
        fields='__all__'
        exclude=['time_field','duration_field','date_time_field']