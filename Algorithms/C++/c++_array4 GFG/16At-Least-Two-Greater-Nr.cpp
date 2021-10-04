// Order Statistics : 
// 9 // Find all elements in array which have at-least two greater elements.    Without Sorting
#include<iostream>
using namespace std;
int main()
{
    int x, count=0;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i<x; i++)
    {
        count=0;
       for(int j=0; j<x; j++)
       {
           if(arr[j]>arr[i])
           {
               count++;
               if(count>=2)
               {
                   cout << arr[i] << "\t";
                   break;
               }
           }
       }
    }
}