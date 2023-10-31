CREATE DATABASE assignmentone;
USE assignmentone;

CREATE TABLE student(
	Id CHAR(4) PRIMARY KEY,
        Name VARCHAR(50) NOT NULL,
        Email VARCHAR(50) UNIQUE,
        Address VARCHAR(255),
        Age INT CHECK(Age>=10)
);

CREATE TABLE library(
	BookName VARCHAR(50),
        BookId CHAR(5) PRIMARY KEY,
        StudentId CHAR(4),
        FOREIGN KEY (StudentId) REFERENCES student(Id)
);

CREATE TABLE fees (
    TrxlId CHAR(16) PRIMARY KEY,
    StudentId CHAR(4),
    Amount INT,
    PaymentDate DATE,
    FOREIGN KEY (StudentId) REFERENCES student(Id)
);




CREATE TABLE employee(
	EmployeeID CHAR(4) PRIMARY KEY,
    FirstName VARCHAR(25),
    LastName VARCHAR(25) NOT NULL,
    Age INT,
    Department VARCHAR(20) NOT NULL
);

-- ALTER TABLE employee
-- MODIFY COLUMN EmployeeId CHAR(4);

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("1","John","Doe", 28,"Sales");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("2","Jane","Smith", 32,"Marketing");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("3","Micheal","Johnson", 35,"Finance");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("4","Sarah","Brown", 30,"HR");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("5","William","Davis", 25,"Engineering");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("6","Emily","Wilson", 28,"Sales");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("7","Robert","Lee", 33,"Marketing");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("8","Laura","Hall", 29,"Finance");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("9","Thomas","White", 31,"HR");

INSERT INTO employee(EmployeeId,FirstName,LastName,Age,Department)
VALUES("10","Olivia","Clark", 27,"Engineering");

SELECT DISTINCT Department
FROM employee;


SELECT LastName
FROM employee
ORDER BY Age DESC;

SELECT LastName
FROM employee
WHERE (Age>30) AND (Department='Marketing');

SELECT * FROM employee;

SELECT *
FROM employee
WHERE (FirstName LIKE '%son%') OR (LastName LIKE '%son%');


SELECT *
FROM employee
WHERE Department='Engineering';