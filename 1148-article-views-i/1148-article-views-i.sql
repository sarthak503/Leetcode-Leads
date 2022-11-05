# Write your MySQL query statement below
Select Distinct author_id as id from Views v where v.author_id=v.viewer_id ORDER BY id;