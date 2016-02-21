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
    int i,j;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
	    for (j = 0; j < n-i; ++j)
	    {
	    	cout << " ";
	    }
	   	for(j = n-i; j < n; j++)
	   	{
	   		cout << "#";
	   	}
	   	cout << endl;
	}
    return 0;
}
