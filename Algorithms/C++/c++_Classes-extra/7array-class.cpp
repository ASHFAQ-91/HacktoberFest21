// apna college , video number 53 , print value taking by user. like name,age , gender.
// make a class 'student', and use array in this program.
//DOUBT------DOUBT-------DOUBT---------DOUBT
#include<iostream>
using namespace std;

class student
{
    string name;
    int age;
    bool gender;

    public:
        int i=1;                //it does work (((1)))
        void getinfo()
        {
            cout << endl << i << "Name :  " ;
            cin >> name;
            cout << " Age :  ";
            cin >> age;
            cout << "Gender :  ";
            cin >> gender;
            i++;                        //same (((1)))
        }
        void printInfo()
        {
            cout << name << "   " << age << "   " << gender << "\n\n";
        }
};
int main()
{
    student arr[3];
    for(int a=0; a<3; a++)
    { 
        arr[a].getinfo();
    }
    for(int a=0; a<3;a++)
    {
        arr[a].printInfo();
    }
}