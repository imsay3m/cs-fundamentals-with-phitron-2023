# Generated by Django 5.0.1 on 2024-01-19 13:32

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('accounts', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Transaction',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('amount', models.DecimalField(decimal_places=2, max_digits=12)),
                ('balance_after_transaction', models.DecimalField(decimal_places=2, max_digits=12)),
                ('transaction_type', models.IntegerField(choices=[(1, 'Deposit'), (2, 'Withdrawal'), (3, 'Loan'), (4, 'Loan Paid'), (5, 'Transfer')], null=True)),
                ('timestamp', models.DateTimeField(auto_now_add=True)),
                ('loan_approve', models.BooleanField(default=False)),
                ('account', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='transactions', to='accounts.userbankaccount')),
            ],
            options={
                'ordering': ['timestamp'],
            },
        ),
        migrations.CreateModel(
            name='Transfer',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('amount', models.DecimalField(decimal_places=2, max_digits=12)),
                ('timestamp', models.DateTimeField(auto_now_add=True)),
                ('account', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='sent_transactions', to='accounts.userbankaccount')),
                ('recipient_account', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='received_transactions', to='accounts.userbankaccount')),
            ],
        ),
    ]
