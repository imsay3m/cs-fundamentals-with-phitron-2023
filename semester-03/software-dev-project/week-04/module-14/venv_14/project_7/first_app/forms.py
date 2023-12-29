from django import forms
from .models import StudentModel

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields = ['roll','name','father_name','address']
        # exclude=['address']
        labels={
            'roll':"Stduent Roll",
            'name':"Stduent Name",
            'father_name':"Father Name",
            'address':"Stduent Address",
        }
        widgets={
            'name':forms.TextInput(attrs={'class':'bg-secondary text-white'}),
            # 'roll':forms.PasswordInput(attrs={'class':'bg-danger '})
        }
        help_texts={
            'name':'Write Your Full Name'
        }
        error_messages={
            'name':{'required':'Your Name Is Required'}
        }
