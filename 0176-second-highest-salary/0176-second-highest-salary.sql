# Write your MySQL query statement below
SELECT MAX(t.Salary) 'SecondHighestSalary'
FROM
(
SELECT DISTINCT e.Salary from Employee e ORDER BY e.Salary DESC LIMIT 1, 1
) AS t