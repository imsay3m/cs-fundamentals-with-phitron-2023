-- Select Query
SELECT *
FROM countries;

SELECT *
FROM departments;

SELECT *
FROM employees;

SELECT first_name, last_name
FROM employees;

-- Where Query
SELECT *
FROM employees
WHERE department_id=60;

SELECT *
FROM employees
WHERE department_id=60 AND salary>8000;

-- Arithmatic Opearator Query
SELECT 5+4;

SELECT first_name, salary, salary+10000
FROM employees;

SELECT first_name, salary, salary+10000
FROM employees
WHERE department_id=100;


-- Comparison Operator Query
SELECT *
FROM employees
WHERE salary>6000;

SELECT *
FROM employees
WHERE salary<6000;

SELECT *
FROM employees
WHERE salary=6000;


-- Distinct Query
SELECT DISTINCT job_id
FROM employees;


-- Order by Query
SELECT *
FROM employees
ORDER BY salary ASC;

SELECT *
FROM employees
ORDER BY salary DESC;


-- Limit ,Offset Query
SELECT *
FROM employees
ORDER BY salary DESC
LIMIT 5; -- First five row


SELECT *
FROM employees
ORDER BY salary DESC
LIMIT 4,5; -- First four is ignored
-- LIMIT offset_number, limit_number;

SELECT *
FROM employees
ORDER BY salary DESC
LIMIT 5
OFFSET 4;
-- LIMIT limit_number
-- OFFSET offset_number
-- limit_number(show row)
-- offset_number(skip row)

-- Like Query
SELECT *
FROM employees
WHERE last_name LIKE  'green%';
-- green___

SELECT *
FROM employees
WHERE last_name LIKE  '%ee%';
-- ___ee___

-- As Query
SELECT first_name, salary AS 'current salary', salary+10000 AS increased_salary
FROM employees;