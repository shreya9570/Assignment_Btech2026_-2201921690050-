# Write your MySQL query statement below
select activity_date as day , count(distinct(user_id)) as active_users from Activity
 where activity_date > '2019-06-27' and activity_date <= '2019-07-27'
 group by activity_date ;





























/*SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity     
WHERE activity_date > '2019-06-27' AND activity_date <= '2019-07-27' //of 30 days ending 2019-07-27 inclusively.
GROUP BY activity_date;
*/








