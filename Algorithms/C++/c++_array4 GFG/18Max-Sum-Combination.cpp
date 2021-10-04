// Order Statistics :
// 14 // K maximum sum combinations from two arrays, with some extra.            // AWESOME
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;                                                                  // array 1st taking value
    cout << "How many value u will enter in 1st Array :  ";
    cin >> x;
    int arr1[x];
    cout << "1st Array \n--------------------------------------------------\n";
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    int y;                                                              // array 2nd taking value
    cout << "How many value u will enter in 2ns Array :  ";
    cin >> y;
    int arr2[y];
    cout << "2nd Array \n---------------------------------------------------\n";
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr2[i];
    }
    int z;                                                              // how many value will print
    cout << "Print Maximum sum combinations :  ";
    cin >> z;
    int n = sizeof(arr1) / sizeof(arr1[0]);                 // Array 1st Descending sorting
    sort(arr1 , arr1 + n, greater<int>());
    int m = sizeof(arr2) / sizeof(arr2[0]);                 // Array 2nd Descending sorting
    sort(arr2 , arr2 + n, greater<int>());
    int a=0, b=0, sum;                              // variables
    if(arr1[0] > arr2[0])
    {
        for(int i=0; i<z; i++)
        {
            sum = arr1[a] + arr2[b];
            cout << endl << sum << " // (A : " << arr1[a] << ") + (B : " << arr2[b] << ")";
            if(b==y-1)
            {
                b=0; 
                a++;
                continue;
            }
            b++;
        }
    }
    else
    for(int i=0; i<z; i++)
    {
        sum = arr1[a] + arr2[b];
        cout << endl << sum << " // (A : " << arr1[a] << ") + (B : " << arr2[b] << ")";

        if(a==x-1)
        {
            a=0; 
            b++;
            continue;
        }
        a++;
    }
}