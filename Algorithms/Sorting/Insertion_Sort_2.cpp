/*
https://www.hackerrank.com/challenges/insertionsort2
*/

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
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
void insertionSort(int ar_size, int *  ar) {
    for(int i = 1; i < ar_size; i++)
    {
        for(int j = i; j > 0 ; j--)
        {
            if(ar[j-1] > ar[j])
                swap(ar[j],ar[j-1]);
        }   
        printArray(ar_size, ar);
    }
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

   insertionSort(_ar_size, _ar);
   
   return 0;
}
