// ARRANGEMENT REARRANGEMENT:   
// Rearrange positive and negative numbers using inbuilt sort function. 
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int x ;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x ; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int n ;
    n = sizeof(arr) / sizeof(arr[0]);
  
    sort(arr, arr + n);
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
}