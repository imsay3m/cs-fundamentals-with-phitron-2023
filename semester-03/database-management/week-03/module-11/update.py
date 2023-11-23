import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost", username="root", passwd="12345687", database=db_name
)
print(mydbconnection)


mycursor = mydbconnection.cursor()

sqlquery = """
            UPDATE student
            SET name= 'Sheikh Eismile Ahmed Sayem'
            WHERE name='Sayem'
            """

mycursor.execute(sqlquery)
mydbconnection.commit()
print("Update Table Successful")
