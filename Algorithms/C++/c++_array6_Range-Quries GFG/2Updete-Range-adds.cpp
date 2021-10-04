// 7 // Constant time range add operation on an array.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i << " :  ";
        cin >> arr[i];
    }
    int Srange, Erange, add;
    while(1)
    { 
        cout << "Update Range Start :  ";
        cin >> Srange;
        cout << "Update Range End, -1 for Exit :  ";
        cin >> Erange;
        if(Srange == -1 || Erange == -1)
        {
            cout << "\nVisit for next time ";
            break;
        }
        for(int i=Srange; i<=Erange; i++)
        {
            add=0;
            cout << "\nIndex " << i << " has " << arr[i] << " value , u want to add more :  ";
            cin >> add;
            arr[i] = arr[i] + add;
        }
        cout << "\nNew Update value :-\n";
        for(int i=0; i<x; i++)
        {
            cout << "\t" << arr[i];
            if(i==x-1)
            {
                cout << "\n\n";
            }
        }
    }
}