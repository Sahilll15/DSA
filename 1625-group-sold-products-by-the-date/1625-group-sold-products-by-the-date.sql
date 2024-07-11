select sell_date,count(distinct product) as 'num_sold',
GROUP_CONCAT(distinct product ORDER BY product) as 'products'
FROM Activities
group by sell_date
order by sell_date;