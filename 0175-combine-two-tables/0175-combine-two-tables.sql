select p.firstName,p.lastName ,a.city ,a.state from Person as p
Left join address as a
on p.personId = a.personId
