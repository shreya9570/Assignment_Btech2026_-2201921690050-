                                                                                                                                                                                                                                                                                                            /*                                                                                                    A S# Write your MySQL query statement below
select e.unique_id , en.name from Employees en left join EmployeeUNI e on e.id = en.id  ;


select e.unique_id , en.name from Employees en left join EmployeeUNI e on e.id = en.id ;
*/




select en.unique_id , e.name 
from Employees e left join EmployeeUNI en on e.id = en.id;
























































