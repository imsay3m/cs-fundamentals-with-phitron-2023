1. creating virtual environment

   - <code>python -m venv virtualEnvironmentName</code>
     <br>
     <b>Note</b>: <i>Go to desired directory first</i>

2. change directory to virtualenvironment

   - after creating virtual environment change directory to virtualEnvironmentName
   - <code>cd virtualEnvironmentName/</code>

3. activating virtual environment

   - <code>source Scripts/activate</code>

4. check pip package list

   - <code>pip list</code>

5. version check django and install django

   - <code>django-admin --version</code>
   - <code>pip install django</code>
   - <code>django-admin --version</code>

6. create a project

   - <code>django-admin startproject projectName</code>

7. change directory to projectName

   - after creating django project change directory to projectName
   - <code>cd projectName/</code>

8. start the server

   - <code>python manage.py runserver</code>

9. create an app

   - django-admin startapp appName

10. for import problem
    - Type <code>pip show Django</code> in terminal
    - Go to the path of intallation mentioned there
    - It will be inside "lib" by default..go back to scripts
    - Inside the scripts , there will be python.exe app
    - Choose this as your interpreter
