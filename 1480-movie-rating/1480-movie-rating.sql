(
    SELECT u.name AS results
    FROM MovieRating mr, Users u
    WHERE mr.user_id = u.user_id
    GROUP BY mr.user_id
    ORDER BY COUNT(1) DESC, u.name
    LIMIT 1
)
UNION ALL
(
    SELECT m.title AS results
    FROM MovieRating mr, Movies m 
    WHERE mr.movie_id = m.movie_id AND mr.created_at LIKE '2020-02%'
    GROUP BY mr.movie_id
    ORDER BY AVG(rating) DESC, m.title
    LIMIT 1
)