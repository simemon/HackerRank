/*
https://www.hackerrank.com/challenges/balanced-parentheses
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include  <stack>
using namespace std;

bool correct_parenthesis(string input)
{
    const char *arr = input.c_str();
    stack<char> s;
    for(int i=0;arr[i] != '\0';i++)
    {
        switch(arr[i])
        {
            case '{':
            case '[':
            case '(':
                s.push(arr[i]);
                break;
            case '}':
            case ']':
            case ')':
                if(!s.empty())
                    {
                    char top = s.top();
                    s.pop();
                    if(!((arr[i] == '}' && top == '{') || (arr[i] == ']' && top == '[') || (arr[i] == ')' && top == '(')))
                        return false;
                }
                else
                    return false;
            break;
        }
    }
    if(s.empty())
        return true;
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testcases;
    cin >> testcases;
    for(int i=0;i<testcases;i++)
    {
        string input;
        cin >> input;
        bool ret = correct_parenthesis(input);    
        if(ret)
            {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
