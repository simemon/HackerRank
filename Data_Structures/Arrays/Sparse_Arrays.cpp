/*
https://www.hackerrank.com/challenges/sparse-arrays
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    //vector<string> str;
    unordered_map<string,int> map;
    pair<unordered_map <string, int>::iterator, bool> map_ret;
    
    for(int i=0;i<n;i++)
    {
        string temp;
        cin >> temp;
        map_ret = map.insert(pair<string,int> (temp, 1));
        if(map_ret.second == false)
        {
            map_ret.first -> second += 1;
        }
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        string temp;
        cin >> temp;
        auto it = map.find(temp);
        if(it == map.end())
            cout << 0 << endl;
        else
            cout << it -> second << endl;
    }
    return 0;
}
