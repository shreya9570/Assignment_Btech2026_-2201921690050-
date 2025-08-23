# Write your MySQL query statement below
SELECT MAX(num) AS num
FROM MyNumbers where num in (select num from MyNumbers 
GROUP BY num
HAVING COUNT(num) = 1
); 

