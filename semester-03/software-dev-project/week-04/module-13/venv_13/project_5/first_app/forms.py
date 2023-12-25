from django import forms
from django.core import validators


class contactForm(forms.Form):
    # widgets == field to HTML input
    name=forms.CharField(label='Full Name:',help_text="Total Length Must Be 50 Characters",required=False,widget=forms.Textarea(attrs={'id':'text-area','class':'class1 class2','placeholder':'Enter Your Name'}))
    # file=forms.FileField()
    email=forms.EmailField(label='User Email',initial='ahmedsayem730@gmail.com')
    # age=forms.IntegerField()
    age=forms.CharField(widget=forms.NumberInput, required=False)
    weight=forms.FloatField()
    balance=forms.DecimalField()
    check=forms.BooleanField()
    birthDate=forms.DateField(widget=forms.DateInput(attrs={'type':'date'}))
    appoinment=forms.DateTimeField(widget=forms.DateInput(attrs={'type':'datetime-local'}))
    CHOICES=[('s','Small'),('m','Medium'),('l','Large'),('xl','Xtra Large'),('xxl','Xtra Xtra Large')]
    size=forms.ChoiceField(choices=CHOICES,widget=forms.RadioSelect)
    MEAL=[('p','Pepperoni'),('m','Mushroom'),('b','Beaf')]
    pizza=forms.MultipleChoiceField(choices=MEAL,widget=forms.CheckboxSelectMultiple)



    """ class studentData(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    email=forms.CharField(widget=forms.EmailInput) """

    """ def clean_name(self):
        valName=self.cleaned_data['name']
        if len(valName)<10:
            raise forms.ValidationError("Enter a Name with at least 10 character")
        return valName
    
    def clean_email(self):
        valEmail=self.cleaned_data['email']
        if ('@' and '.com') not in valEmail:
            raise forms.ValidationError("Enter a valid Email")
        return valEmail """
    
    """ def clean(self):
        # cleaned_data=super().clean()
        valName=self.cleaned_data['name']
        valEmail=self.cleaned_data['email']

        if len(valName)<10:
            raise forms.ValidationError("Enter a Name with at least 10 character")
        if ('@' and '.com') not in valEmail:
            raise forms.ValidationError("Enter a valid Email") """


def len_check(value):
    if len(value)<10:
        raise forms.ValidationError("Enter at Least 10 character")

class studentData(forms.Form):
    name = forms.CharField(validators=[validators.MinLengthValidator(10,message='Enter a name with at least 10 charecter')])
    email=forms.CharField(widget=forms.EmailInput,validators=[validators.EmailValidator(message="Enter a valid email")])
    age=forms.IntegerField(validators=[validators.MaxValueValidator(34,message='Age must be maximum 34'),validators.MinValueValidator(24,message='Age must be at least 24')])
    file=forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf','png'])])
    text=forms.CharField(validators=[len_check])



class passwordValidationProject(forms.Form):
    name=forms.CharField(widget=forms.TextInput)
    password=forms.CharField(widget=forms.PasswordInput)
    confirmPassword=forms.CharField(label='Confirm Password', widget=forms.PasswordInput)

    def clean(self):
        # cleaned_data= super().clean()
        valName=self.cleaned_data['name']
        valPass=self.cleaned_data['password']
        valConfirmPass=self.cleaned_data['confirmPassword']
        if valPass!=valConfirmPass:
            raise forms.ValidationError("Password doesn't Match")
        if len(valName)<10:
            raise forms.ValidationError('Name must be at least 10 characters')
