select p.product_name,sum(o.unit) as unit
from Products p
inner join Orders o
on p.product_id=o.product_id
where Year(order_date)= 2020 and MONTH(order_date)=02
group by p.product_name
having unit>= 100;

