// 13 // find a Rotation with Maximum hamming Distance.
#include<iostream>
using namespace std;
int main()
{
    int x, count=0, Mcount=0;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x], arr2[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    for(int i=0; i<x-1; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    for(int i=0, j=1; i<x-1; i++, j++)
    {
        count=0;
        for(int k=arr[i]; k<arr[j]; k++)
        {
            count++;
        }
        if(count > Mcount)
        {
            Mcount = count;
        }
    }
    cout << "-------------------------------------\n" << Mcount << "\nExplanation:\n";
    cout << "Maximum hamming distance = " << Mcount;
    cout << "\nWe get this hamming distance with  ";
    int temp;
    for(int i=0; i<1; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(j==0)
            {
                temp = arr2[j];
            }
            else 
            {
                arr2[j-1] = arr2[j];
                if(j==x-1)
                {
                    arr2[j] = temp;
                }
            }
        }
    }
    for(int i=0; i<x; i++)
    {
        cout << arr2[i] << "  ";
    }
    cout << "\nAll the places can be occupied by another digit.\n";
    cout << "Other possible solutions are ";
    for(int i=0, temp=0; i<x-2; i++)
    {
        if(i!=0)
        {
            cout << "  and  ";
        }
        for(int j=0; j<x; j++)
        {
            if(j==0)
            {
                temp = arr2[j];
            }
            else 
            {
                arr2[j-1] = arr2[j];
                if(j==x-1)
                {
                    arr2[j] = temp;
                }
            }
        }
        for(int i=0; i<x; i++)
        {
            if(i==x-1)
            {
                cout << arr2[i];
            }
            else
            {
            cout << arr2[i] << "  ";
            }
        }
    }
    cout << ".";
}