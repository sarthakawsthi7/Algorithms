# Write your MySQL query statement below
select product_name, year, price from sales as s
left join product as pd on s.product_id=pd.product_id; 