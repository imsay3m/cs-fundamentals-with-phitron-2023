1. creating virtual environment
    - <code>python -m venv virtualEnvironmentName</code> 
    <br>
    <b>Note</b>: <i>Go to desired directory first</i>

2. change directory to virtualenvironment
    - after creating virtual environment change directory to virtualEnvironmentName
    - <code>cd virtualEnvironmentName/</code>

2. activating virtual environment
    - <code>source Scripts/activate</code>

3. check pip package list
    - <code>pip list</code>

4. version check django and install django
    - <code>django-admin --version</code>
    - <code>pip install django</code>
    - <code>django-admin --version</code>

5. create a project
    - <code>django-admin startproject projectName</code>

6. change directory to projectName
    - after creating django project change directory to projectName
    - <code>cd projectName/</code>

7. start the server
    - <code>python manage.py runserver</code>

8. create an app
    - <code>django-admin startapp appName</code>

9. for import problem
    - Type <code>pip show Django</code> in terminal
    - Go to the path of intallation mentioned there
    - It will be inside "lib" by default..go back to scripts
    - Inside the scripts , there will be python.exe app
    - Choose this as your interpreter

10. crispy forms installation
    - <code>pip install crispy-bootstrap5</code>
    - <code>INSTALLED_APPS =<br>
    (
        <br>
                                ...
        <br>
                                "crispy_forms",
        <br>
                                "crispy_bootstrap5"
        <br>
                                ...
        <br>
    )
        </code>
    - <code>CRISPY_ALLOWED_TEMPLATE_PACKS = "bootstrap5"<br>
    CRISPY_TEMPLATE_PACK = "bootstrap5"</code>
    - Installed Packages <code>pip freeze > requirements.txt</code>
    - add gitignore file
    

11. Create migrations
    - <code>python manage.py makemigrations</code>

12. Run migration
    - <code>python manage.py migrate</code>

13. Create superuser for authenficiation/admin panel
    - <code>python manage.py createsuperuser</code>

14. psycopg2 installation for PostgreSql
    - <code>pip install psycopg2</code>
    - <code>DATABASES = {<br>
        'default': {<br>
            'ENGINE': 'django.db.backends.postgresql_psycopg2',<br>
            'NAME': 'your_db_name',<br>
            'USER': 'postgres',<br>
            'PASSWORD': 'your_db_password',<br>
            'HOST': 'localhost',<br>
            'PORT': '5432',<br>
            }<br>
        }<br>
    </code>

15. django-environ package installation
    - <code>pip install django-environ</code>
    - <code>
        import environ<br>
        env = environ.Env()<br>
        environ.Env.read_env()<br>
        ...<br>
        # Your secret key<br>
        SECRET_KEY = env("SECRET_KEY")<br>
        ...<br>
        DATABASES = {<br>
            'default': {<br>
                'ENGINE': 'django.db.backends.postgresql_psycopg2',<br>
                'NAME': env("DB_NAME"),<br>
                'USER': env("DB_USER"),<br>
                'PASSWORD': env("DB_PASSWORD"),<br>
                'HOST': env("DB_HOST"),<br>
                'PORT': env("DB_PORT"),<br>
            }<br>
        }<br>
        </code>

16. 
    - Installed Packages <code>pip freeze > requirements.txt</code>