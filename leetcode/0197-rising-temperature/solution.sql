/* Write your PL/SQL query statement below */
SELECT w2.id
FROM Weather w2
JOIN Weather w1
ON w2.recordDate-w1.recordDate=1
WHERE w1.temperature<w2.temperature;
