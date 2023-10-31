CREATE DATABASE programminghero;
-- DROP DATABASE `programminghero`; 
USE programminghero;


CREATE TABLE student(
	Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(50) UNIQUE,
    Address VARCHAR(255),
    Age INT CHECK(Age>10)
);

DROP TABLE `programminghero`.`student`;


CREATE TABLE student(
	Roll CHAR(4),
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(50),
    Address VARCHAR(255),
    Age INT,
    PRIMARY KEY(Roll),
	UNIQUE(Email),
    CHECK(Age>10)
);

DROP TABLE `programminghero`.`student`;


CREATE TABLE student(
	Roll CHAR(4),
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(50),
    Address VARCHAR(255),
    Age INT,
    CONSTRAINT pk_rule PRIMARY KEY(Roll),
	CONSTRAINT unique_rule UNIQUE(Email),
    CONSTRAINT checking_rule CHECK(Age>10)
);


INSERT INTO student(Roll, Name, Email, Address, Age) VALUES('185','Sheikh Eismile Ahmed Sayem','ahmedsayem730@gmail.com','Sylhet',21);

INSERT INTO student(Roll, Name, Email, Address, Age) VALUES('181','Sultan Al Siam','siam57@gmail.com','Sylhet',22);

INSERT INTO student(Roll, Name, Email, Age) VALUES('175','Kawsar Alom','parthokhan@gmail.com',23);


CREATE TABLE library(
	BookName VARCHAR(50) PRIMARY KEY,
    WhoBorrowed CHAR(4),
    FOREIGN KEY (WhoBorrowed) REFERENCES student(Roll)
);


CREATE TABLE course(
	CourseName VARCHAR(10),
    University VARCHAR(10),
    Credit INT,
    PRIMARY KEY(CourseName, University)
);

-- DROP TABLE course;

