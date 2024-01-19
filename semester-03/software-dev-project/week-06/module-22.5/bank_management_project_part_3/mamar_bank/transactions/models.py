from django.db import models
from accounts.models import UserBankAccount
from .constants import TRANSACTION_TYPE
# Create your models here.

class Transaction(models.Model):
    account=models.ForeignKey(UserBankAccount,related_name='transactions',on_delete=models.CASCADE)
    amount=models.DecimalField(decimal_places=2,max_digits=12)
    balance_after_transaction=models.DecimalField(decimal_places=2,max_digits=12)
    transaction_type=models.IntegerField(choices=TRANSACTION_TYPE,null=True)
    timestamp=models.DateTimeField(auto_now_add=True)
    loan_approve=models.BooleanField(default=False)

    class Meta:
        ordering=['timestamp']

class Transfer(models.Model):
    account=models.ForeignKey(UserBankAccount,related_name='sent_transactions',on_delete=models.CASCADE)
    recipient_account = models.ForeignKey(UserBankAccount, related_name='received_transactions', on_delete=models.CASCADE)
    amount=models.DecimalField(decimal_places=2,max_digits=12)
    timestamp=models.DateTimeField(auto_now_add=True)