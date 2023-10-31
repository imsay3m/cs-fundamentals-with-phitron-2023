use dummydb;

-- 1. Advanced Subquery
SELECT
	DISTINCT salary
FROM
	employees
ORDER BY
	salary DESC
LIMIT
	1
OFFSET
	1;



SELECT
	*
FROM
	employees
WHERE salary =(
			SELECT
				DISTINCT salary
			FROM
				employees
			ORDER BY
				salary DESC
			LIMIT
				1
			OFFSET
				1
            );




SELECT
	MAX(salary)
FROM
	employees
WHERE
	salary< (
			SELECT
				MAX(salary)
			FROM
				employees
			);




SELECT
	*
FROM
	employees
WHERE salary =(
		SELECT
			MAX(salary)
		FROM
			employees
		WHERE
			salary< (
				SELECT
					MAX(salary)
				FROM
					employees
					)
			);




-- 2. Advanced Subquery
SELECT
	*
FROM
	employees AS emp
WHERE
	salary > (
		SELECT
			salary
		FROM
			employees AS mgr
		WHERE
			emp.manager_id = mgr.employee_id
        );



SELECT
	*
FROM
	employees AS emp
WHERE
	job_id = (
		SELECT
			job_id
		FROM
			employees AS mgr
		WHERE
			emp.manager_id = mgr.employee_id
        );