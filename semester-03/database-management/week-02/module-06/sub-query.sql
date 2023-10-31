USE dummydb;
-- 1. Normal Query

SELECT 
    salary
FROM
    employees
WHERE
    employee_id = 144;

SELECT 
    *
FROM
    employees
WHERE
    salary < 2500;


-- 1. Sub Query
SELECT 
    *
FROM
    employees
WHERE
    salary < (
		SELECT
			salary
		FROM
			employees
		WHERE
			employee_id=144
		);


-- 2. Normal Query
SELECT
	MAX(salary)
FROM
	employees;

SELECT
	*
FROM
	employees
WHERE
	salary=24000;



-- 2. Sub Query
SELECT
	*
FROM
	employees
WHERE
	salary = (
		SELECT
			MAX(salary)
		FROM
			employees
			);


-- 3. Normal Query
SELECT
	department_id
FROM
	departments
WHERE
	department_name='Marketing';


SELECT
	*
FROM
	employees
WHERE
	department_id=20;



-- 4. Sub Query
SELECT
	*
FROM
	employees
WHERE
	department_id= (
			SELECT
				department_id
			FROM
				departments
			WHERE
				department_name='Marketing'
				);

SELECT
	AVG(salary)
FROM
	employees
WHERE
	department_id= (
			SELECT
				department_id
			FROM
				departments
			WHERE
				department_name='Marketing'
				);




-- 5. Sub Query
SELECT
	COUNT(*)
FROM
	employees
WHERE
	department_id= (
			SELECT
				department_id
			FROM
				departments
			WHERE
				department_name='IT'
				);


-- 6. Sub Query
SELECT
	SUM(salary)
FROM
	employees
WHERE
	job_id=(
			SELECT
				job_id
            FROM
				jobs
			WHERE
				job_title='Programmer'
			);