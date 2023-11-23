import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost", username="root", passwd="12345687", database=db_name
)
print(mydbconnection)


mycursor = mydbconnection.cursor()

sqlquery = """
            INSERT INTO student(roll, name)
            VALUES(185,'Sayem')
            """

mycursor.execute(sqlquery)
mydbconnection.commit()
print("Insert into Table Successful")
