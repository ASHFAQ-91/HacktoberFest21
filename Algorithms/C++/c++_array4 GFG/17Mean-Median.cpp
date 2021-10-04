// Order Statistics :
// 10 //  Program for Mean , Median and Mode of an unsorted array.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    double sum=0, flag;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    flag = x % 2;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  "; 
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Mean = " << sum / x << "\n";           // mean
    int a;                                          // median
    double median;
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    if(flag==0)
    {
        a = x / 2;
        median = (arr[a] + arr[--a]) / (double)2;
        cout << "Median = " << median << "\n";
    }
    else 
    {
        a = x / 2;
        cout << "Median = " << arr[a] << "\n";
    }
    double count=1, Mcount=1, Mrepeat=0, mode;          // mode
    for(int i=0; i<x; i++)
    {
        count=1;
        for(int j=i+1; j<x; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(count>Mcount)
                {
                    Mcount = count;
                    Mrepeat = arr[i];
                }
            }
        }
    }
    cout << "Mode = " << Mrepeat ; 
}