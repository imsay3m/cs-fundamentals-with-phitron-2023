USE dummydb;
SELECT 
    MAX(salary)
FROM
    employees;



SELECT 
    department_id, MAX(salary)
FROM
    employees
GROUP BY department_id;


SELECT 
    department_id, MIN(salary)
FROM
    employees
GROUP BY department_id;



SELECT 
    department_id, AVG(salary)
FROM
    employees
GROUP BY department_id;



SELECT 
    department_id, COUNT(*)
FROM
    employees
GROUP BY department_id;



SELECT 
    *
FROM
    employees
WHERE
    department_id = 60;


SELECT 
    department_id, MAX(salary)
FROM
    employees
WHERE
    department_id != 20
GROUP BY department_id;



SELECT 
    department_id, MAX(salary)
FROM
    employees
WHERE
    department_id != 20
GROUP BY department_id
HAVING MAX(salary) > 5000;



SELECT 
    department_id, AVG(salary) AS avarage_salary
FROM
    employees
WHERE
    department_id != 20
GROUP BY department_id
HAVING avarage_salary >= 5000;
