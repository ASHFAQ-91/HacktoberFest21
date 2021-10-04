// Order Statistics :           // NOT COMPLITE//DYNAMIC ALLOCATION OF ARRAY 2ND & 3RD.
// 21 // Find k numbers with most occurrences in the given array.
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr1[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :   " ;
        cin >> arr1[i];
    }
    int n = sizeof(arr1) / sizeof(arr1[0]);
    sort(arr1, arr1 + n);
    int arr2[x], arr3[x], k, a=-1, count, arr_size_count=0;
    cout << "Print how many most frequency number :  ";
    cin >> k;
    for(int i=0; i<x; i++)
    {
        count = 0;
        a++;
        cout << "a= " << a;
        for(int j=i; j<x; j++)////i
        {
            if(arr1[i]==arr1[j])
            {
                arr2[a] = arr1[i];
                arr3[a] = ++count;
            }
            else
            {
                break;
            }
        }
        if(count>1)
        {
            i = i + (count-1);
        }
        arr_size_count++;
    }
    // int arr2[arr_size_count], arr3[arr_size_count];
    for(int i=0; i<arr_size_count-1; i++)
    {
        for(int j=i+1; j<arr_size_count; j++)
        {
            if(arr3[i]<arr3[j])
            {
                arr3[i] = arr3[i] + arr3[j];
                arr3[j] = arr3[i] - arr3[j];
                arr3[i] = arr3[i] - arr3[j];

                arr2[i] = arr2[i] + arr2[j];
                arr2[j] = arr2[i] - arr2[j];
                arr2[i] = arr2[i] - arr2[j];
            }
        }
    }
    /// 
    for(int i=0; i<x; i++)
    {
        cout << "\n" << arr2[i] << "\t" << arr3[i];
    }
    //
    for(int i=0; i<k; i++)
    {
        cout << "\nFrequency of " << arr2[i] << " = " << arr3[i];
    }
}