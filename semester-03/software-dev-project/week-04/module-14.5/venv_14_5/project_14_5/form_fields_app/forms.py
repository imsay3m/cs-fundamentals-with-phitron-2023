from django import forms
from datetime import datetime

class ExampleForm(forms.Form):
    name=forms.CharField()
    comment = forms.CharField(widget=forms.Textarea)
    email = forms.EmailField(required = False,label="Please enter your email address",)
    agree = forms.BooleanField(initial=True)
    date = forms.DateField(initial=datetime.today)
    birth_date = forms.DateField(widget=forms.NumberInput(attrs={'type': 'date'}))
    BIRTH_YEAR_CHOICES = ['1980', '1981', '1982']
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTH_YEAR_CHOICES))
    value = forms.DecimalField()
    message = forms.CharField(max_length = 10)
    first_name = forms.CharField(initial='Your name')

    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),]
    select_favorite_color = forms.ChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_color = forms.ChoiceField(widget=forms.RadioSelect, choices=FAVORITE_COLORS_CHOICES)
    select_favorite_colors = forms.MultipleChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_colors = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,choices=FAVORITE_COLORS_CHOICES)
    title = forms.CharField() 
    description = forms.CharField()
    last_name = forms.CharField(max_length = 200)  
    roll_number = forms.IntegerField(help_text="Enter 6 digit roll number")  
    password = forms.CharField(widget = forms.PasswordInput())
