// 1 // 2 // 3 // 17 // program for left array rotation.
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
    int Lrotate, temp;
    cout << "\nHow many times u want to left rotate :  ";
    cin >> Lrotate;
    for(int i=0; i<Lrotate; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(j==0)
            {
                temp = arr[j];
            }
            else
            {
                arr[j-1] = arr[j];
                    if(j==x-1)
                {
                    arr[j] = temp;
                }
            }  
        }
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr[i];
    }
}