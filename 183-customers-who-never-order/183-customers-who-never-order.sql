# Write your MySQL query statement below
select name as Customers from Customers left join orders on customers.id = orders.customerID where orders.customerid is null;