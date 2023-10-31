CREATE DATABASE programminghero
USE programminghero;

CREATE TABLE student(
    Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50),
    Marks DOUBLE
);


INSERT INTO student(Roll, Name, Marks) VALUES(185,'Sayem',87);


INSERT INTO student(Roll, Name) VALUES(181,'Siam');


SET SQL_SAFE_UPDATES =0;
UPDATE student
SET Name='Sheikh Eismile Ahmed Sayem'
Where Roll=185;
SET SQL_SAFE_UPDATES =1;


SET SQL_SAFE_UPDATES =0;
DELETE FROM student
WHERE Roll=181

