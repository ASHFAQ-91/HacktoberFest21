// MO's Algorithm (Query Square Root Decomosition).
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
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int a, Srange, Erange, Rsum=0;
    while(1)
    {
        Rsum = 0;
        cout << "Starting range of sum :  ";
        cin >> Srange;
        cout << "Ending range of sum, -1 for Exit :  ";
        cin >> Erange;
        if(Srange == -1 || Erange == -1)
        {
            break;
        }
        for(int i=Srange; i<=Erange; i++)
        {
            Rsum = Rsum + arr[i];
        }
        cout << "Sum of arr[] elements in range [" << Srange << ", " << Erange << "]" << " is ";
        cout << Rsum << "\n\n";
    }
}