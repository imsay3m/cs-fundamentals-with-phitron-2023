from django.contrib.auth.base_user import BaseUserManager
from django.contrib.auth.models import AbstractUser
from django.db import models


class UserManager(BaseUserManager):
    def create_user(self, name, email, password, user_type="basic"):
        if not name:
            raise ValueError("Users must have a name")
        if not email:
            raise ValueError("Users must have an email address")
        if not password:
            raise ValueError("Users must have a password")
        email = self.normalize_email(email)
        user = self.model(
            name=name,
            email=email,
            username=email,
            user_type=user_type,
            is_active=False,
        )
        user.set_password(password)
        user.save(using=self._db)
        return user

    def create_superuser(self, name, email, password):
        user = self.create_user(
            name=name,
            email=email,
            password=password,
            user_type="admin",
        )
        user.is_active = True
        user.is_staff = True
        user.is_superuser = True
        user.save(using=self._db)
        return user


class CustomUser(AbstractUser):
    USER_TYPE_CHOICES = (
        ("basic", "basic"),
        ("standard", "standard"),
        ("premium", "premium"),
        ("admin", "admin"),
    )
    user_type = models.CharField(max_length=20, choices=USER_TYPE_CHOICES)
    name = models.CharField(max_length=100)
    email = models.EmailField(max_length=100, unique=True)
    USERNAME_FIELD = "email"
    REQUIRED_FIELDS = ["name", "user_type"]

    def is_basic(self):
        return self.user_type == "basic"

    def is_standard(self):
        return self.user_type == "standard"

    def is_premium(self):
        return self.user_type == "premium"

    def is_admin(self):
        return self.user_type == "admin"

    objects = UserManager()

    def __str__(self):
        return self.email
