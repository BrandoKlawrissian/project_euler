



WITH params AS (
    SELECT 980000 AS total_squares
)
SELECT
    (m * (2*m - 1) * (2*m + 1)) / 3 AS sum_of_odd_squares
FROM (
    SELECT total_squares / 2 AS m
    FROM params
) t;
