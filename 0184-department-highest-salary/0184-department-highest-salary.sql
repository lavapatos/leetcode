# Write your MySQL query statement below
SELECT d.name AS Department, e.name AS Employee, e.salary 
FROM Department d
JOIN Employee e
ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(e.salary) FROM Employee e
    WHERE e.departmentId = d.id
);