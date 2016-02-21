/*
https://www.hackerrank.com/challenges/runningtime
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void printArray(int n, int *arr)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int insertionSort(int ar_size, int *  ar) {
    int count = 0;
    for(int i = 1; i < ar_size; i++)
    {
        for(int j = i; j > 0 ; j--)
        {
            if(ar[j-1] > ar[j])
            {
                swap(ar[j],ar[j-1]);
                count += 1;
            }
        }   
        //printArray(ar_size, ar);
    }
    return count;
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   int count = insertionSort(_ar_size, _ar);
   cout << count;
   
   return 0;
}
