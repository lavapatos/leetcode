-- Write your PostgreSQL query statement below
SELECT p.firstName AS firstname, 
       p.lastName AS lastname,
       a.city AS city,
       a.state AS state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;