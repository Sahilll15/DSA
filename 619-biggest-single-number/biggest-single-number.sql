# Write your MySQL query statement below
SELECT MAX(num) AS num FROM MYNumbers
WHERE num IN (
    SELECT num FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
);

