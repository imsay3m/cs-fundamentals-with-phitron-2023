import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost", username="root", passwd="12345687", database=db_name
)
print(mydbconnection)


mycursor = mydbconnection.cursor()

sqlquery = """
            CREATE TABLE student
            (
                roll VARCHAR(4),
                name VARCHAR(50)
            )
            """

mycursor.execute(sqlquery)
print("Create Table Successful")
