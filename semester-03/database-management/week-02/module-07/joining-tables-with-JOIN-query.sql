USE dummydb;
SELECT *
FROM employees;

SELECT *
FROM departments;



-- Joining Tables With Using JOIN query
SELECT employees.department_id, employees.first_name, departments.department_name
FROM employees JOIN departments
ON employees.department_id = departments.department_id;



SELECT employees.department_id, employees.first_name, departments.department_name
FROM employees JOIN departments
USING (department_id); -- only work for same field name