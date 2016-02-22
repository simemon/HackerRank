/*
https://www.hackerrank.com/challenges/c-tutorial-stringstream
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    vector<int> res;
    istringstream ss(str);
    
    while(ss)
    {
        string token;
        if(!getline(ss,token,','))
            break;
        res.push_back(stoi(token));
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
