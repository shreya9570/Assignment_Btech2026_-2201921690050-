# Write your MySQL query statement below
SELECT p.product_id, IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) AS average_price
FROM Prices p LEFT JOIN UnitsSold u
ON p.product_id = u.product_id AND
u.purchase_date BETWEEN start_date AND end_date
group by product_id


/*
#(\U0001f9fe Final Summary
JOIN Type	Clean?	Easy to understand?	Filters unmatched?	Recommended?
INNER JOIN ... ON ... BETWEEN ...	✅ Yes	✅ Very	✅ Yes	✅✅✅ Best
LEFT JOIN ... ON ... + null handling	⚠️ Complex	❌ No	❌ Keeps NULLs	❌ Not needed here
LEFT JOIN + WHERE BETWEEN	✅ Filters	❌ Looks weird	✅ Filters	✅ Same as INNER, but messy) */