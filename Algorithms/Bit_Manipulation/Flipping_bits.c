/*
https://www.hackerrank.com/challenges/flipping-bits
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcases;
    scanf("%d", &testcases);
    while(testcases--)
    {
        unsigned int n;
        scanf("%u",&n);
        unsigned int zero = 0;
        n = ~(n^zero);
        printf("%u\n",n);
    }
    
    return 0;
}
