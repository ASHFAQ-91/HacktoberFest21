// Order Statistics :
// Find the smallest missing number 
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
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int a=0;
    for(int i=0; i<x; i++)
    {
        if(arr[i] == a)
        {
            a++;
            if(i==x-1)
            {
                x++;
            }
            continue;
        }
        cout << "The smallest missing number is : " << a;
        break;
    }
}