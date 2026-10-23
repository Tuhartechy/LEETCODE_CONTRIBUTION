select name as Employee from Employee as e
where salary > 
       (select salary from employee as m
       where m.Id = e.managerId);

