-- https://leetcode.com/problems/duplicate-emails/description/

USE problem;


Create table If Not Exists person (id int, email varchar(255));
Truncate table person;


insert into person (id, email) values ('1', 'a@b.com');
insert into person (id, email) values ('2', 'c@d.com');
insert into person (id, email) values ('3', 'a@b.com');



SELECT email
FROM person
GROUP BY email
HAVING COUNT(email)>1;