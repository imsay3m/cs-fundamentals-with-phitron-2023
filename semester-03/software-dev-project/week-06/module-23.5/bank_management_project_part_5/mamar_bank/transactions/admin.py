from typing import Any
from django.contrib import admin

from transactions.views import send_transaction_mail
from .models import Transaction
# Register your models here.
@admin.register(Transaction)
class TransactionAdmin(admin.ModelAdmin):
    list_display=['account','amount','balance_after_transaction','transaction_type','loan_approve']
    
    def save_model(self, request , obj , form , change ):
        if obj.loan_approve:
            obj.account.balance+=obj.amount
            obj.balance_after_transaction=obj.account.balance
            obj.account.save()
            send_transaction_mail(obj.account.user,obj.amount,"Loan Approval",'transactions/admin_mail.html')
        return super().save_model(request, obj, form, change)