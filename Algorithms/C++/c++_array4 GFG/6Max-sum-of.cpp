// 8 // Maximum sum of i*arr[i] among all rotations of a given array.           // AWESOME 
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
    int sum, Msum=0, temp;
    cout << "Explanation: Lets look at all the rotation,";
    for(int i=0; i<x; i++)
    {
        sum = 0;
        cout << "\n{";
        for(int j=0; j<x; j++)
        {
            if(j==x-1)
            {
                cout << arr[j];
                cout << "} = ";
            }
            else 
            {
             cout << arr[j] << ", ";
            }
        }
        for(int j=0; j<x; j++)
        {
            if(j==x-1)
            {
                sum = sum + (arr[j]*j);
                cout << arr[j] << "*" << j << " = "  << sum;
            }
            else
            {
                cout << arr[j] << "*" << j << " + ";
                sum = sum + (arr[j]*j);
            }
        }
        for(int k=0; k<x; k++)
        {
            if(k==0)
            {
                temp = arr[k];
            }
            else
            {
                arr[k-1] = arr[k]; 
                if(k==x-1)
                {
                    arr[k] = temp;
                }
            }
        }
        if(sum > Msum)
        {
            Msum = sum;
        }
    }
    cout << "\n\nMax sum value = " << Msum << endl;
}