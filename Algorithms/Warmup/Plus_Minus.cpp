/*
https://www.hackerrank.com/challenges/plus-minus
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int pos = 0, neg = 0, zero = 0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i] > 0)
            pos += 1;
        else if(arr[arr_i] < 0)
            neg += 1;
        else
            zero += 1;
    }
    cout << float(pos) / n << endl;
    cout << float(neg) / n << endl;
    cout << float(zero) / n << endl;
    return 0;
}
