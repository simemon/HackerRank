/*
https://www.hackerrank.com/challenges/coin-change
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int result(vector<int> &coins, int n)
{
    vector<long long int> v(n+1,0);
    /*for(int  i=1; i<=n; i++)
    {
        int sum  = 0;
        for(auto c:coins)
        {
            if(c < i)
                sum += v[i-c];
            else if(c == i)
                sum += 1;
        }
        v[i] = sum;
    }*/
    v[0] = 1;
    for(auto c:coins)
    {
        for(int  i=c; i<=n; i++)
        {
            v[i] += v[i-c]; 
        }
    }
    
    return v[n];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    vector<int> coins;
    int temp;
    for(int i=0;i<m;i++)
    {
        cin >> temp;
        coins.push_back(temp);
    }
    long long int res = result(coins,n);
    cout << res;
    return 0;
}
