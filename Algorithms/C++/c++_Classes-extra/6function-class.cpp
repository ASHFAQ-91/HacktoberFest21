//apna college , video number 53 , Adding 3 student data like name, age , gender.
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////
class student
{
    public:
        string name;
        int age;
        bool gender;
        int i=1;
///////////////////////////////////////////////////////////////////////////////////////////////
        void getData()
        {   
            cout << endl << i <<  "\nEnter your name :  " ;
            cin >> name;
            cout << "Enter your age :  ";
            cin >>  age;
            cout << "Enter your gender :  ";
            cin >> gender;
            i++;
        }
///////////////////////////////////////////////////////////////////////////////////////////////        
        void setData()
        {
            cout << name << "   " << age << "   " << gender <<endl;
        }
};
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    student a,b,c;
    a.getData();
    b.getData();
    c.getData();

    a.setData();
    b.setData();
    c.setData();
return 0;
}
