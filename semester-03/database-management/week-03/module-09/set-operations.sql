use dummydb;


-- 1 Column Number is not same
SELECT first_name
FROM employees
WHERE salary>10000
UNION
SELECT *
FROM employees
WHERE department_id=100;





-- 2 UNION All Column
SELECT *
FROM employees
WHERE salary>10000
UNION
SELECT *
FROM employees
WHERE department_id=100;




-- 3 UNION ALL
SELECT *
FROM employees
WHERE salary>10000
UNION ALL
SELECT *
FROM employees
WHERE department_id=100;






-- 4 INTERSECTION
SELECT *
FROM employees
WHERE salary>10000
INTERSECT
SELECT *
FROM employees
WHERE department_id=100;




-- 5 MINUS(deprecated)
SELECT *
FROM employees
WHERE salary>10000
MINUS
SELECT *
FROM employees
WHERE department_id=100;


SELECT *
FROM employees
WHERE salary>10000 AND department_id!=100;