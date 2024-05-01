# Write your MySQL query statement below

select name as Customers 
from Customers where Customers.id 
NOT IN (select CustomerId from Orders);