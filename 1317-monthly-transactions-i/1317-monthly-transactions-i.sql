SELECT
    CONCAT(YEAR(trans_date), '-',
        (
            CASE WHEN LENGTH(MONTH(trans_date)) = 1 THEN CONCAT(0, MONTH(trans_date)) ELSE MONTH(trans_date) END
        )
    ) AS month,
    country,
    COUNT(id) AS trans_count,
    COUNT(CASE WHEN state = 'approved' THEN 1 END) AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM Transactions
GROUP BY
    month,
    country;
