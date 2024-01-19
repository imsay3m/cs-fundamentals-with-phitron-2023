from django import forms
from .models import Transaction, Transfer,UserBankAccount


class TransactionForm(forms.ModelForm):
    class Meta:
        model=Transaction
        fields=['amount','transaction_type']
    def __init__(self,*args,**kwargs):
        self.account=kwargs.pop('account')
        super().__init__(*args,**kwargs)
        self.fields['transaction_type'].disabled=True #this field will be disabled
        self.fields['transaction_type'].widget=forms.HiddenInput() #it will be hidden from user
    
    def save(self,commit=True):
        self.instance.account=self.account
        self.instance.balance_after_transaction=self.account.balance
        return super().save()


class DepositForm(TransactionForm):
    def clean_amount(self):
        min_deposit_amount=100
        amount=self.cleaned_data.get('amount') #get the amount that user filled in
        if amount<min_deposit_amount:
            raise forms.ValidationError(
                f"You need to deposit at least {min_deposit_amount} $"
            )
        return amount

class WithdrawForm(TransactionForm):
    def clean_amount(self):
        account=self.account
        balance=account.balance
        min_withdraw_amount=500
        max_withdraw_amount=40000
        amount=self.cleaned_data.get('amount')
        if balance < 0:
            raise forms.ValidationError(
                "Bank has gone bankrupt"
            )
        if amount<min_withdraw_amount:
            raise forms.ValidationError(
                f"You can withdraw at least {min_withdraw_amount}$"
            )
        if amount >balance:
            raise forms.ValidationError(
                f"You have{balance}$ in your account You cannot withdraw more than your account balance"
            )
        if amount >max_withdraw_amount:
            raise forms.ValidationError(
                f"You can withdraw at most {max_withdraw_amount}$"
            )
            
        return amount

class LoanRequestForm(TransactionForm):
    def clean_amount(self):
        amount=self.cleaned_data.get('amount')
        return amount


class TransferForm(forms.ModelForm):
    class Meta:
        model = Transfer
        fields = ['amount', 'recipient_account']

    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        self.fields['recipient_account'].queryset = UserBankAccount.objects.exclude(id=self.account.id)

    def save(self, commit=True):
        self.instance.account = self.account
        return super().save(commit)
    
    def clean_amount(self):
        account=self.account
        balance=account.balance
        min_withdraw_amount=500
        max_withdraw_amount=100000
        amount=self.cleaned_data.get('amount')
        if amount<min_withdraw_amount:
            raise forms.ValidationError(
                f"You can Transfer at least {min_withdraw_amount}$"
            )
        if amount >balance:
            raise forms.ValidationError(
                f"You have{balance}$ in your account You cannot transfer more than your account balance"
            )
        if amount >max_withdraw_amount:
            raise forms.ValidationError(
                f"You can transfer at most {max_withdraw_amount}$"
            )
        return amount