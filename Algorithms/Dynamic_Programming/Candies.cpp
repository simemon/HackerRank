/*
https://www.hackerrank.com/challenges/candies
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b)   {
    return (a>b?a:b);
}
int candies(vector<int>& v)
{
    int n = v.size();
    vector<int> left(n,0), right(n,0);
    left[0] = 1;
    for(int i =1;i<n;i++)
    {
        if(v[i] <= v[i-1])
            left[i] = 1;
        else
            left[i] = left[i-1] + 1; 
    }
    
    right[n-1] = 1;
    for(int i =n-2;i>=0;i--)
    {
        if(v[i] <= v[i+1])
            right[i] = 1;
        else
            right[i] = right[i+1] + 1; 
    }
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum += max(left[i],right[i]);
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> student;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        student.push_back(temp);
    }
    int count = candies(student);
    cout << count;
    return 0;
}
