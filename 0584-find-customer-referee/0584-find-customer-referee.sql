# Write your MySQL query statement below
# SELECT name FROM Customer where IFNULL(referee_id,0)!=2
SELECT name FROM Customer where referee_id<>2 or referee_id IS NULL;