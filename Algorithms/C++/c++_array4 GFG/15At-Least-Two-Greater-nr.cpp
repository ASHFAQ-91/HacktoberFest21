// Order Statistics : 
// 9 //Find all elements in array which have at-least two greater elements. With SORTING
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
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
    int n; 
    n = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr + n);
    for(int i=0; i<x-2; i++)
    {
        cout << "\t" << arr[i];
    }
}