/*
https://www.hackerrank.com/challenges/unbounded-knapsack
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int max(int a, int b)
{
    return (a>b?a:b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> v(k+1,0);
        vector<int> buckets;
        int temp;
        
        for(int i = 0;i<n;i++)
        {
            cin >> temp;
            buckets.push_back(temp);
            if(temp <= k)
                v[temp] = temp;
        }
        std::sort(buckets.begin(),buckets.end());
        for(int i=1;i<=k;i++)
        {
            if(v[i] == i)
                continue;
            else
            {
                int max_val = 0;
                for(int j = 0;j<n && buckets[j] <= i;j++)
                {
                    //cout << buckets[j] << endl;
                    
                    if((i % buckets[j]) == 0)
                    {
                        max_val = i;
                        break;
                    }
                    else
                    {
                        //cout << i-buckets[j] << endl;
                        max_val = max(max_val,v[i-buckets[j]] + buckets[j]);
                    } 
                }
                v[i] = max_val;
            }
        }
        cout << v[k] << endl;
    }
    return 0;
}
