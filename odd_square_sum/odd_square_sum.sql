/*A number is a perfect square, or a square number, if it is the square of a positive integer. 
#For example, is a square number because ; it is also an odd square. 
#The first 5 square numbers are: , and the sum of the odd squares is . 
#Among the first 980 thousand square numbers, what is the sum of all the odd squares? 
Show your work.*/

WITH params AS (
    SELECT 980000 AS total_squares
)
SELECT
    (m * (2*m - 1) * (2*m + 1)) / 3 AS sum_of_odd_squares
FROM (
    SELECT total_squares / 2 AS m
    FROM params
) t;
