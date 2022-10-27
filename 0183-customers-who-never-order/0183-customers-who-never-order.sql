# Write your MySQL query statement below
SELECT customers.name as 'Customers'
FROM customers 
where customers.id not in
(
SELECT customerid from orders
);