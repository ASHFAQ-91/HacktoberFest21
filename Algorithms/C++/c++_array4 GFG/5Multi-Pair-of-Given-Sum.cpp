// 6 // Given a sorted and rotated array, find if there is a pair with a given sum.
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
    int sum, flag=0;
    cout << "Enter the Sum of pair that u want to find :  ";
    cin >> sum;
    for(int i=0; i<x-1; i++)
    {
      for(int j=i+1; j<x; j++)
      {
        if(sum == arr[i] + arr[j])
        {
         cout << "\n\nTrue\nThere is a pair (" << arr[i] << ", " << arr[j] << ") with sum " << sum;  
         flag=1;
        }
      }
    }
    if(flag==0) {
    cout << "False\nThere is no pair with sum " << sum;
    }
    gtot : ;
}