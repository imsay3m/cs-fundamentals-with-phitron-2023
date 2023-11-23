import mysql.connector

mydb = mysql.connector.connect(host="localhost", username="root", passwd="12345687")
print(mydb)
