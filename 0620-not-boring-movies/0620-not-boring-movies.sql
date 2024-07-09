select ID,movie,description,rating
from Cinema 
where ID % 2 != 0
and description !="boring"
order by rating desc;
