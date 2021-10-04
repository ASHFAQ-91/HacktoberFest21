// Range LCM Queries.
#include<iostream>
#include<algorithm>
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
    int LCM , Srange , Erange;
        cout << "Starting Range from :  ";
        cin >> Srange;
        cout << "Ending Range to, -1 for Exit :  ";
        cin >> Erange;
        int *max = std::max_element(arr + Srange, arr + Erange);
        cout << *max;
    while(1)
    {
        if(Srange==-1 || Erange==-1)
        {
            break;
        }
        if(Srange == Erange)
        {
            cout << "\nThe LCM of single element is :  " << arr[Srange];
        }
        for(int i=Srange; i<Erange; i++)
        {
            if(arr[i] % *max == 0 &&  arr[i+1] % *max == 0)
            {
                if(i==Erange-1)
                { 
                    cout << "In the first query LCM (";
                    for(int j=Srange; j<=Erange; j++)
                    {
                        cout << arr[j];
                        if(j!=Erange)
                        {
                            cout << ", ";
                        }
                        else
                        {
                            cout << ") = " << *max << ", \nsimilarly in other queries.";
                        }
                    }
                    goto gtot ;
                }
                continue;
            }
            ++*max;
            i--;
        }
    }
    gtot : ;
}