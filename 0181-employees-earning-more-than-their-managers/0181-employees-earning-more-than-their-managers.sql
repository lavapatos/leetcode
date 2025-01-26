# Write your MySQL query statement below
SELECT e.name AS Employee FROM Employee e
JOIN Employee mans
ON mans.id = e.managerId
WHERE e.salary > mans.salary;