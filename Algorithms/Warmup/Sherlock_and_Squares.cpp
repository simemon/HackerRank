/*
https://www.hackerrank.com/challenges/sherlock-and-squares
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test;
    cin >> test;
    for(int t = 0; t < test; t++)
    {
        int a,b;
        cin >> a >> b;
        int count = 0;
        int tmp;
        int i;
        for(i = a; i <= b; i++)
        {
            tmp = floor(sqrt(i));
            if(tmp * tmp == i)
            {
                count += 1;
                break;
            }
        }
        if(i <= b)
        {
            while(1)
            {
                i += tmp*2 + 1;
                if(i <= b)
                    count++;
                else
                    break;
                tmp += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
