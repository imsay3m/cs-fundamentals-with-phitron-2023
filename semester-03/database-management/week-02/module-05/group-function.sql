USE dummydb;
SELECT 
    *
FROM
    employees;

SELECT 
    MAX(salary)
FROM
    employees;

SELECT 
    AVG(salary)
FROM
    employees;

SELECT 
    COUNT(salary)
FROM
    employees;

SELECT 
    COUNT(employee_id)
FROM
    employees;

SELECT 
    COUNT(manager_id)
FROM
    employees;

SELECT 
    COUNT(*)
FROM
    employees;