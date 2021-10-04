// Order Statistics : 
// 18 // Find k pairs and print array1 & array2 pair with ascending order.          // AWESOME
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in 1st array :  ";
    cin >> x;
    int arr1[x];
    cout << "1st Array \n-----------------------------------------------------\n";
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    int n = sizeof(arr1) / sizeof(arr1[0]);
    sort(arr1, arr1 + n);
    int y;
    cout << "How many vlaue u will enter in 2nd array :  ";
    cin >> y;
    int arr2[y];
    cout << "2nd Array \n-----------------------------------------------------\n";
    for(int i=0; i<y; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr2[i];
    }
    int m = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr2, arr2 + m);
    int k;
    cout << "Print array1 & array2 pair with ascending order :  ";
    cin >> k;
    for(int i=0; i<k; i++)
    {
        if(i<x && i<y)
        {
            cout << endl << "[" << arr1[i] << ", " << arr2[i] << "]";
        }
        else
        {
            cout << "\nSorry , but there is no more pair in both arrays";
            break;
        }
        if(i+1<x && i+1<y)
        {
            cout << ",";
        }
    }
}