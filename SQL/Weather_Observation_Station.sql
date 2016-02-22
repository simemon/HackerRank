# https://www.hackerrank.com/challenges/weather-observation-station-5

/*
Enter your query here.
*/
select city, char_length(city) from station order by char_length(city) limit 1;
select city, char_length(city) from station order by char_length(city) desc limit 1;