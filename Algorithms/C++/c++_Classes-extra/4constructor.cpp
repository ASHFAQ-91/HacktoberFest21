/* 4 // print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating 
        a class named 'Triangle' with the constructor having the three sides as its parameters */
#include<iostream>
using namespace std;
class display
{
    public:
        int a,b,c;
        display(int c1, int c2, int c3)
        {
            a = c1;
            b = c2;
            c = c3;
        }
        void printNumber()
        {
            double s = (a+b+c)/2.0;
            cout << "Area of triangle " << s << endl;
            cout << "parimeter of triangle " << (a+b+c) << endl;
        }
};
int main()
{
    display t(3,4,5);
    t.printNumber();
}