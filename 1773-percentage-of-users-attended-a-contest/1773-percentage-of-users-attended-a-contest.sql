# Write your MySQL query statement belSELECT 
  select  contest_id, 
  ROUND(COUNT(DISTINCT user_id) * 100.0 / (SELECT COUNT(user_id) FROM Users), 2) AS percentage
FROM 
  Register
GROUP BY 
  contest_id
ORDER BY 
  percentage DESC, 
  contest_id ASC;

#If percentages are same → sort by contest_id ascending.
#By default, SQL uses ASC (ascending order) when you don’t specify anything.