# Write your MySQL query statement below
SELECT     u.user_id AS buyer_id,
           u.join_date,
           IFNULL(c.order_count, 0) AS orders_in_2019
FROM       Users u
LEFT JOIN (SELECT   buyer_id,
                    COUNT(buyer_id) AS order_count
           FROM    (SELECT buyer_id
                    FROM   Orders
                    WHERE  order_date >= '2019-01-01') o
           GROUP BY buyer_id) c
ON         u.user_id = c.buyer_id
ORDER BY   u.user_id ASC;