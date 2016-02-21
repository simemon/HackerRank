/*
https://www.hackerrank.com/challenges/sherlock-and-array
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcases;
    cin >> testcases;
    
    for(int t = 0; t < testcases; ++t)
    {
        int N;
        cin >> N;
        vector <int> v;
        vector <int> sum_left;
        vector <int> sum_right;
        int temp;
        int i;
        for(i = 0; i < N;i++)
        {
           cin >> temp;
           v.push_back(temp);
        }
        sum_left.push_back(0);
        sum_right.push_back(0);
        
        for(i = 0; i < N; i++)
        {
            int old_val;
            old_val = sum_left[i];
            sum_left.push_back(old_val + v[i]);
            old_val = sum_right[i];
            sum_right.push_back(old_val + v[N-i-1]);
        }
        for(i = 1; i <= N; i++)
        {
            if(sum_left[i] == sum_right[N+1-i])
            {
                cout << "YES" << endl;
                break;
            }
        }
        if(i > N)
            cout << "NO" << endl;
    }
    
    return 0;
}
