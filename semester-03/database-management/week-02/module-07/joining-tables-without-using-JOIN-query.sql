USE dummydb;
SELECT *
FROM employees;

SELECT *
FROM departments;


-- Joining Tables Without Using JOIN query
SELECT employees.department_id, employees.first_name, departments.department_name
FROM employees, departments
WHERE employees.department_id = departments.department_id;