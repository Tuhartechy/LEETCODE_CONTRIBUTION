select w1.id from Weather as w1
join weather as w2
 ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
where w1.temperature > w2.temperature