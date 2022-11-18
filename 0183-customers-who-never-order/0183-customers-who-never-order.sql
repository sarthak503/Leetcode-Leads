# Write your MySQL query statement below
SELECT name as 'Customers'
FROM customers 
where id NOT IN
( SELECT customerid from orders ) ;