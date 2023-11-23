CREATE SCHEMA mid_term;
USE mid_term;

-- Q.3
CREATE TABLE departments(
	dept_id CHAR(4) PRIMARY KEY,
    department_name VARCHAR(25)
);

CREATE TABLE employees(
	first_name VARCHAR(50),
    last_name VARCHAR(50) NOT NULL,
    date_of_birth DATE,
    dept_id CHAR(4),
    salary INT NOT NULL,
    FOREIGN KEY(dept_id) REFERENCES departments(dept_id)
);


USE dummydb;
-- Q.4
SELECT *
FROM employees;

SELECT MAX(salary)
FROM employees
WHERE salary< (
		SELECT MAX(salary)
        FROM employees
	);



-- Q.5
SELECT *
FROM departments;

SELECT *
FROM employees;

SELECT departments.department_name, AVG(employees.salary)
FROM employees JOIN departments
ON employees.department_id = departments.department_id
GROUP BY departments.department_id;







-- Q.8
SELECT *
FROM employees
WHERE salary < (
				SELECT salary
				FROM employees
				WHERE first_name = 'STEVEN'
				LIMIT 1 
				);





-- Q.9
SELECT 
    job_id, COUNT(*) AS number_of_emp
FROM
    employees
GROUP BY job_id;








-- Q.10
SELECT department_name
FROM departments LEFT JOIN employees 
ON departments.department_id = employees.department_id
GROUP BY department_name
HAVING COUNT(employees.employee_id) = 0;




