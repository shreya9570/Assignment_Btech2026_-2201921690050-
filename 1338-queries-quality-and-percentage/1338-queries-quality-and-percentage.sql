# Write your MySQL query statement below
/*
SELECT QUERY_NAME, ROUND(AVG(RATING/POSITION), 2) AS QUALITY,
 ROUND(AVG(IF(RATING<3,1,0))*100, 2) AS POOR_QUERY_PERCENTAGE
FROM QUERIES
GROUP BY QUERY_NAME
*/



select query_name , round( avg(rating/position) , 2) as quality,  
round(avg( if(rating < 3, 1 , 0))*100 , 2) as poor_query_percentage 
from queries 
group by query_name ; 