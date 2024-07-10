select e1.employee_id,e1.name,count(e1.employee_id) as reports_count,ROUND(avg(e2.age)) as average_age 
from Employees e1
inner join Employees e2
where e1.employee_id=e2.reports_to
group by e1.employee_id
order by e1.employee_id;
