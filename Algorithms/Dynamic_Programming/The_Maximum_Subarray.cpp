/*
https://www.hackerrank.com/challenges/maxsubarray
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int my_max(long int a, long int b)
{
    return (a>b?a:b);    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int testcases;
    cin >> testcases;
    
    for(int t = 0; t < testcases; t++)
    {
        int N;
        int i;
        cin >> N;
        vector <int> v;
        int temp;
        
        for(i = 0; i < N; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        
        long int max_so_far = v[0];
        long int curr_max = v[0];
        long int sum = v[0];
        bool all_negative = true;
        
        for(i = 0; i < N; i++)
        {
            if(v[i] >= 0)
            {
                all_negative = false;
                break;
            }
            else
            {
                sum = my_max(v[i],sum);
            }
        }
        if(!all_negative)
        {
            if(v[0] >= 0)
                sum = v[0];
            else
                sum = 0;
        }
        
        for(i = 1; i < N; i++)
        {
            //cout << sum << endl;
            if(!all_negative)
                sum =  my_max(sum, sum + v[i]);
            curr_max = my_max(v[i], curr_max + v[i]);
            max_so_far = my_max(max_so_far, curr_max);
        }
        cout << max_so_far << " " << sum << endl;
    }
    return 0;
}
