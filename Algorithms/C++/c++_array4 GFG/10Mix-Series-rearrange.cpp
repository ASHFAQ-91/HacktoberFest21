// ARRANGEMENT REARRANGEMENT:                   // AWESOME
// 4 // 5-Similer // Rearrange positive negative numbers in 0(n) times and 0(1) extra space.
#include<iostream>
using namespace std;
int main()
{
    int x; 
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr1[x];
    for(int i=0; i<x; i++)                  // taking value
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    for(int i=0; i<x-1; i++)                  // ascending order
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr1[i]>arr1[j])
            {
                arr1[i] = arr1[i] + arr1[j];
                arr1[j] = arr1[i] - arr1[j];
                arr1[i] = arr1[i] - arr1[j];
            }
        }
    }
    int arr2[x]={0}, flag=1,k=0,l=0;        // variables and identifiers
    for(int i=0; i<x; i++)                  // +ve & -ve rearrange mix series
    { 
        for(int j=0; j<x; j++)
        {
            if(flag==1 && arr1[k]>=0)
            {
                arr2[i] = arr1[k];
                k++;
                flag=0;
                break;
            }
            else if(flag==0 && arr1[l]<0)
            {
                arr2[i] = arr1[l];
                l++;
                flag=1;
                break;
            }
            if(arr1[i]>=0)
            {
                flag=1;
                continue;
            }
            k++;
        }
    }
    for(int i=0; i<x; i++)      // print
    {
        cout << "\t" << arr2[i];
    }
}