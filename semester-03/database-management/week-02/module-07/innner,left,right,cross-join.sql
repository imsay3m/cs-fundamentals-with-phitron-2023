SELECT employees.department_id, employees.first_name, departments.department_name
FROM employees JOIN departments
ON employees.department_id = departments.department_id;


-- INNER JOIN
SELECT employees.first_name, departments.department_name
FROM employees INNER JOIN departments
ON employees.department_id = departments.department_id;


-- LEFT JOIN
SELECT employees.first_name, departments.department_name
FROM employees LEFT JOIN departments
ON employees.department_id = departments.department_id;


-- RIGHT JOIN
SELECT employees.first_name, departments.department_name
FROM employees RIGHT JOIN departments
ON employees.department_id = departments.department_id;


-- CROSS JOIN
SELECT employees.first_name, departments.department_name
FROM employees CROSS JOIN departments
ON employees.department_id = departments.department_id;