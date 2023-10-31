-- SELF JOIN
SELECT f.first_name, l.last_name
FROM employees AS f JOIN employees AS l
ON f.employee_id = l.employee_id;