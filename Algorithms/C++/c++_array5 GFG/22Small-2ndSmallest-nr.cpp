// Order Statistics :
// Find the smallest and second smallest elements in an array. But the numbers are not same.
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  " ;
    cin >> x;
    int arr[x] = {0};
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr + n );
    int a=2;
    for(int i=0; i<a; i++)
    {
        if(i==0)
        {
        cout << "\nThe smallest element is " << arr[i] ;
        cout << " and \nsecond Smallest element is " ;
        continue;
        }
        if(arr[i-1]==arr[i])
        {
            ++a;
            continue;
        }
        cout << arr[i];
    }
}