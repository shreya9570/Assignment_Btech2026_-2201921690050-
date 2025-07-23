# Write your MySQL query statement below
select 
contest_id, 
round(count(distinct user_id) * 100 /(select count(user_id) from Users) ,2) as percentage
from  Register
group by contest_id
order by percentage desc,contest_id
#If percentages are same → sort by contest_id ascending.
#By default, SQL uses ASC (ascending order) when you don’t specify anything.