# Write your MySQL query statement below
#Without the ON clause, the JOIN operation would produce a Cartesian product
/*select p.product_name , s.year , s.price from Sales s join Product p on s.product_id = p.product_id;
#Data Integrity: The ON clause ensures that you only combine rows that have matching values in the specified columns (product_id in this case).
#Logical Matching: It defines the logical condition for joining the tables, ensuring meaningful results.
#Control Over Join Behavior: You can customize how tables are joined by using different conditions in the ON clause
*/

select p.product_name, s.year, s.price
from Sales s join Product p on s.product_id = p.product_id ;


































