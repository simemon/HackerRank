#	https://www.hackerrank.com/challenges/more-than-75-marks

/*
Enter your query here.
*/
select name from students where marks > 75 ORDER BY lower(RIGHT(students.name, 3)), id
