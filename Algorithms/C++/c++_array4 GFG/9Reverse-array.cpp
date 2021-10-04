// ARRANGEMENT REARRANGEMENT:
// 2 // Write a program to reverse an array.
#include<iostream>
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
    for(int i=0, j=x-1; i<x/2; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr[i];
    }
}