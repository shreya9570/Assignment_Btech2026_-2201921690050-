# Write your MySQL query statement below
SELECT 
    LEFT(trans_date, 7) AS month,
    country, 
    COUNT(id) AS trans_count,
    SUM(state = 'approved') AS approved_count, #SELECT COUNT(IF(state='approved', 1, NULL)) FROM Transactions; also true 
     SUM(amount) AS trans_total_amount,
    SUM((state = 'approved') * amount) AS approved_total_amount
FROM 
    Transactions
GROUP BY 
    month, country;