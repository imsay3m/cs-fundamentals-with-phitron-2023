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

practice-10.5-repo: https://github.com/imsay3m/cs-fundamentals-2023/tree/main/semester-03/software-dev-project/week-03/module-10.5/venv_10_5
practice-11.5-repo: https://github.com/imsay3m/cs-fundamentals-2023/tree/main/semester-03/software-dev-project/week-03/module-11.5/venv_11_5
doc-file: https://docs.google.com/document/d/1A-gNZh2n1uG8ru-w0wLisRKIdM2UmZrmHyuD0i6Aeso/edit?usp=sharing
assignment-03-repo: https://github.com/imsay3m/cs-fundamentals-2023/tree/main/semester-03/software-dev-project/week-03/module-12/venv_12