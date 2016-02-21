/*
https://www.hackerrank.com/challenges/stockmax
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int n;
        cin >> n;
        vector<int> price;
        int temp;
        for(int i =0; i < n; i++)
        {
            cin >> temp;
            price.push_back(temp);
        }
        int curr_max = INT_MIN;
        long int profit = 0;
        for(int j = n-1;j >= 0; j--)
        {
            if(curr_max < price[j])
                curr_max = price[j];
            profit += curr_max - price[j];
        }
        cout << profit << endl;
    }
        
    return 0;
    
    
}
