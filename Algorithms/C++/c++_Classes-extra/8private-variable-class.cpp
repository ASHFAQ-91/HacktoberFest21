// apna college , video number 53, using private variable.
#include<iostream>
using namespace std;

class student
{
    string name;        //using private variable
    
    public:
        int age;
        bool gender;
        void setName(string v1)
        {
            name = v1;   
        }
        void getData()
        {
            cout << "Age :  ";
            cin >> age;
            cout << "Gender :  ";
            cin >> gender;
        }
        void printData()
        {
            cout << name << "   " << age << "   " << gender << endl;
        }
};
int main()
{
    student arr[3];
    for(int i=0; i<3; i++)
    {
        string n;
        cout << endl << "Name :  ";
        cin >> n;
        arr[i].setName(n);
        arr[i].getData();
    }
    for(int i=0; i<3; i++)
    {
        arr[i].printData();
    }
}