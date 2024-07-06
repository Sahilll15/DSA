select p.product_name as product_name,s.year as year,s.price as price from
Sales  s inner join Product p where s.product_id = p.product_id;