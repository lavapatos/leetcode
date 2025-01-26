# Write your MySQL query statement below
SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM Employee e
JOIN Department d
ON e.departmentId = d.id
WHERE (
    SELECT COUNT(DISTINCT em.salary) FROM Employee em
    WHERE em.departmentId = e.departmentId AND e.salary <= em.salary
) < 4
ORDER BY Department, Salary DESC;