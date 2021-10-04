// 13 // Reorder an array according to given indexes.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr1[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    int arr2[x];
    cout << "\nGive the index number to the value :-\n";
    for(int i=0; i<x; i++)
    {
        cout << "Value " << arr1[i] << " will print on index Potision :  ";
        cin >> arr2[i];
    }
    int a=0, arr3[x]={0};
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(arr2[a]==j)
            {
                arr3[j] = arr1[a];
                a++;
                break;
            }
        }
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr3[i];
    }
}