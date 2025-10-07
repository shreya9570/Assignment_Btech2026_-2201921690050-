# Write your MySQL query statement below
/*
SELECT 
  s.user_id,
  ROUND(IFNULL(SUM(c.action = 'confirmed') / COUNT(c.action), 0), 2) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c ON s.user_id = c.user_id
GROUP BY s.user_id;
*/


#So we use 0 inside IFNULL to safely handle missing data and show 0.00 as the confirmation rate instead of NULL.
 #IFNULL(expression, 0)
select s.user_id , ROUND(IFNULL(sum(c.action = 'confirmed')/count(c.action) , 0), 2 ) as Confirmation_rate from Signups s left join Confirmations c on s.user_id = c.user_id group by s.user_id ;