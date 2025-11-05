# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT 
    p.project_id,
    #The ROUND function is used to round off a numeric value to a specified number of decimal places.
 # The second argument (2) specifies that the result should be rounded to 2 decimal places.
    ROUND(AVG(e.experience_years), 2) AS average_years
FROM 
    Project p
JOIN 
    Employee e
ON 
    p.employee_id = e.employee_id
GROUP BY 
    p.project_id;
    




































































    