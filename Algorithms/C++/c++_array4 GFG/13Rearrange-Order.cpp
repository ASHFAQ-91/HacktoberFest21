// ARRANGEMENT REARRANGEMENT:   
// Rearrange an array in order - smallest, largest, 2nd smallest, 2nd largest, ....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int cx = x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int n ;
    n = sizeof(arr) / sizeof(arr[0]);
     
    sort(arr, arr + n);
    int arr2[x] = {0}, flag=0, j=0;
    for(int i=0; i<x; i++)
    {
        if(flag==0)
        {
            arr2[i] = arr[j];
            j++;
            flag=1;
            continue;
        }
        else if(flag==1)
        {
            arr2[i] = arr[--cx];
            flag=0; 
            continue;
        }
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr2[i];
    }
}