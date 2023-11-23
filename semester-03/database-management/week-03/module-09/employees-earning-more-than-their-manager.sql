-- https://leetcode.com/problems/employees-earning-more-than-their-managers/description/


USE problem;

Create table If Not Exists Employee (id int, name varchar(255), salary int, managerId int);
Truncate table Employee;
insert into Employee (id, name, salary, managerId) values ('1', 'Joe', '70000', '3');
insert into Employee (id, name, salary, managerId) values ('2', 'Henry', '80000', '4');
insert into Employee (id, name, salary, managerId) values ('3', 'Sam', '60000', NULL);
insert into Employee (id, name, salary, managerId) values ('4', 'Max', '90000', NULL);




SELECT EMP.name AS employee
FROM Employee AS EMP, Employee AS MGR
WHERE EMP.managerId = MGR.id AND EMP.salary > MGR.salary;