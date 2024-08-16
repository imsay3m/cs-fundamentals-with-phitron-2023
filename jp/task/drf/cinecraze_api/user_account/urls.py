from django.urls import include, path
from rest_framework.routers import DefaultRouter

from .views import (
    ChangePasswordView,
    UserLoginAPIView,
    UserLogoutAPIView,
    UserRegistrationAPIView,
    UserViewSet,
    activate,
)

router = DefaultRouter()
router.register(r"user_accounts", UserViewSet)

urlpatterns = [
    path("", include(router.urls)),
    path("register/", UserRegistrationAPIView.as_view(), name="register"),
    path("login/", UserLoginAPIView.as_view(), name="login"),
    path("logout/", UserLogoutAPIView.as_view(), name="logout"),
    path("activate/<uid64>/<token>/", activate, name="activate"),
    path(
        "change_password/",
        ChangePasswordView.as_view(),
        name="change_pass",
    ),
]
