/*
https://www.hackerrank.com/challenges/pangrams
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPangram(string &s)
{
    if(s.length() < 26)
        return false;    
    vector<bool> english(26,0);
    for(auto i:s)
    {
        if(i >= 65 && i <= 90)
        {
            english[i-65] = true;
        }
        else if(i >= 97 && i <= 122)
        {
            english[i-97] = true;
        }
    }
    for(auto i:english)
    {
        if(!i)
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    std::getline(std::cin, s);
    bool res = isPangram(s);
    if(!res)
        cout << "not ";
    cout << "pangram";
    
    return 0;
}
