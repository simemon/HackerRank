/*
https://www.hackerrank.com/challenges/c-tutorial-pointer
*/

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function    
    int temp = *a + *b;
    *b = std::abs(*a - *b);
    *a = temp;
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
