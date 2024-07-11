select user_id,concat(Upper(substr(name,1,1)),LOWER(substr(name,2,LENGTH(name)))) as name
from Users
order by user_id;