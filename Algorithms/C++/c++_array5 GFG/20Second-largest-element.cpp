// Order Statistics :
// 20 // Find Second largest element in an array. 
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int n = sizeof(arr) /sizeof(arr[0]);
    sort(arr, arr + n , greater<int>());
    cout << "The Second Largest Number is :  " << arr[1];
}