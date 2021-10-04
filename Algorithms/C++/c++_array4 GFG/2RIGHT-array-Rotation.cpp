// 4 // 12 // program for right array rotation .
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
    int Rrotate, temp;
    cout << "How many times u want to rotate the array :  ";
    cin >> Rrotate;
    for(int i=0; i<Rrotate; i++)
    {
        for(int j=x-1; j>=0; j--)
        {
            if(j==x-1)
            {
                temp = arr[j];
            }
            else
            {
                arr[j+1] = arr[j];
                if(j==0)
                {
                    arr[j] = temp;
                }
            }
        }
    }
    for(int i=0; i<x; i++)
    {
        if(i==0)
        {
            cout << endl;
        }
        cout << "\t" << arr[i];
    }
}