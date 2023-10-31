USE dummydb;
-- SELECT
-- 	*
-- FROM
-- 	employees
-- LIMIT 5;

WITH
	temp AS(
	SELECT
		*
	FROM
		employees
	LIMIT
		5
    )
SELECT
	*
FROM
	temp;





SELECT
	AVG(salary)
FROM
	employees
WHERE
	department_id=60;-- IT 



SELECT
	MAX(salary)
FROM
	employees
WHERE
	department_id=20;-- Marketing




WITH
	AVGIT AS(
		SELECT
			AVG(salary) AS SALIT
		FROM
			employees
		WHERE
			department_id=60
            ),
	MAXMRKT AS(
		SELECT
			MAX(salary) AS SALMRKT
		FROM
			employees
		WHERE
			department_id=20
			)

SELECT
	*
FROM
	employees
WHERE
	salary >(SELECT
					SALIT
				FROM
					AVGIT
                    ) AND salary <  (SELECT
											SALMRKT
										FROM
											MAXMRKT
                                            )