/*
https://www.hackerrank.com/challenges/angry-professor
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isCancel(vector <int> &v, int k)
{
    for(auto i:v)
    {
        if(i <= 0)
        {
           k--;
           //cout << i << " " << k  << endl;
           if(k == 0)
               return false;
        }    
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        bool cancel = isCancel(a,k);
        if(cancel)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
