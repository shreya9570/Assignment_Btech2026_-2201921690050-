# Write your MySQL query statement belo
select x,y, z,
#Begins a conditional logic block, similar to an if-else statement in programming.  
case
#Each WHEN specifies a condition to check.
#The corresponding THEN specifies the value to return if the condition is true.
when x+y >z and x +z > y and y+z > x then 'Yes'
#Provides a default value if none of the WHEN conditions are met.
else 'No'
#Marks the end of the CASE statement.(end)
# to add new coloum 
end as triangle 
from Triangle ;
