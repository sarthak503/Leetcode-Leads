# Write your MySQL query statement below
Select event_day as day, emp_id, sum(out_time)-sum(in_time) as total_time From Employees group by emp_id,day;