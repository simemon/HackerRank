/*
https://www.hackerrank.com/challenges/cpp-input-and-output
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sum = 0;
    int n;
    for(int i=0;i<3;i++)    {
        cin >> n;
        sum += n;
    }
    cout << sum;
    return 0;
}
