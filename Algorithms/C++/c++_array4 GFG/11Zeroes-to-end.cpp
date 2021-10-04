// ARRANGEMENT REARRANGEMENT:                   // AWESOME
// 6 // 7similar Move all Zeroes to end of array.                // AWESOME
#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr1[x];
    for (int i = 0; i < x; i++)                     // taking value
    {
        cout << "Enter value " << i + 1 << " :  ";
        cin >> arr1[i];
        if (arr1[i] != 0)
        {
            count++;
        }
    }
    int arr2[x] = {0}, k = 0, l = 0, flag = 1, Ccount = 0;
    for (int i = 0; i < x; i++)                             // arrange the array
    {
        for (int j = 0; j < x; j++)
        {
            if (arr1[k] != 0 && flag == 1)
            {
                arr2[i] = arr1[k];
                Ccount++;
                if (count == Ccount)
                {
                    flag = 0;
                    break;
                }
                k++;
                break;
            }
            else if (arr1[l] == 0 && flag == 0)
            {
                arr2[i] = arr1[l];
                l++;
                break;
            }
            if (flag == 0)
            {
                l++;
                continue;
            }
            k++;
        }
    }
    for (int i = 0; i < x; i++)                 // print value\element
    {
        cout << "\t" << arr2[i];
    }
}