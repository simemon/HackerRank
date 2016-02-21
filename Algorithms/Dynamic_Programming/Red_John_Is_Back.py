'''
https://www.hackerrank.com/challenges/red-john-is-back
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def ncr(N,k): # from scipy.comb(), but MODIFIED!
    if (k > N) or (N < 0) or (k < 0):
        return 0L
    N,k = map(long,(N,k))
    top = N
    val = 1L
    while (top > (N-k)):
        val *= top
        top -= 1
    n = 1L
    while (n < k+1L):
        val /= n
        n += 1
    return val

def brickway(n):
    bars = n/4
    count = 1
    for i in range(1,bars+1):
        sticks = n - (i * 4)
        count += ncr(i + sticks, i)
    return count

def isPrime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True;

def number_of_primes(n):
    count = 0
    for i in range(2,n+1):
        if(isPrime(i)):
            count += 1
    return count

testcases = int(raw_input())
for t in range(0,testcases):
    n = int(raw_input())
    n = brickway(n)
    print number_of_primes(n)