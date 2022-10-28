# Write your MySQL query statement below
SELECT employee_id, if(mod(employee_id,2)=1 AND NOT name LIKE 'M%',salary,0) as bonus from Employees order by employee_id;