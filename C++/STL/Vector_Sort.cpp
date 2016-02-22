/*
https://www.hackerrank.com/challenges/vector-sort
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(auto i:v)
        cout << i << " ";
    return 0;
}
