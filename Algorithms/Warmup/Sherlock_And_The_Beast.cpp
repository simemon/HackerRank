/*
https://www.hackerrank.com/challenges/sherlock-and-the-beast
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int threes = 0, fives = 0;
        if(n < 3 || n == 4 || n == 7)
            cout << "-1";
        else
        {
            if(n % 3 == 0)
            {
                fives = n;
            }
            else if(n % 3 == 1)
            {
                threes = 10;
                fives = n - 10;
            }
            else if(n % 3 == 2)
            {
                threes = 5;
                fives = n - 5;
            }
            int i;
            for(i=0;i < fives; i++)
                cout << "5";
            for(i=0;i<threes;i++)
                cout << "3";
        }
        cout << endl;
    }
    return 0;
}
