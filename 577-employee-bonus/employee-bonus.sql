# Write your MySQL query statement below
Select Employee.name,Bonus.bonus from Employee Left Join Bonus on Employee.empId=Bonus.empId WHERE Bonus.bonus<1000 or Bonus is NULL;