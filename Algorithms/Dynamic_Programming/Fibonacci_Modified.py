'''
https://www.hackerrank.com/challenges/fibonacci-modified
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
l = map(int, raw_input().split())
first = l[0]
second = l[1]
n = l[2]
res = 0
for i in range(3,n+1):
    res = second * second + first
    first,second = second, res
print res