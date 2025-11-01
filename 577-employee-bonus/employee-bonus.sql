SELECT 
E.name,
B.bonus
FROM Employee E LEFT JOIN Bonus B ON E.empID=B.empId
Where bonus<1000 OR Bonus IS NULL;