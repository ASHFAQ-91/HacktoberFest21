// 5 // Search an element in a sorted and rotated array.
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
    int key;
    cout << "Which number u want to find :  ";
    cin >> key;
    for(int i=0; i<x; i++)
    {
        if(arr[i] == key)
        {
            cout << "Found at index " << i;
            goto gtot;
        }
    }
    cout << "Not found";
    gtot : ;
}