// 11 // Find the Minimum element in a sorted and rotated array.
#include<iostream>
using namespace std;
int main()
{
    int x, Snum=0;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];

        if(i>0 && arr[i-1] > arr[i])
        {
            Snum = arr[i];
        }
    }
    cout << "-------------------------------------------\nThe Smallest number in an array :  ";
    cout << Snum << endl;
}