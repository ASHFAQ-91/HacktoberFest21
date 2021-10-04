#include<iostream>
using namespace std;
class complex           // complex is a class
    {
        int a,b;            // default as a private
        public:
            void setData(int v1 , int v2)           //function definition
            {
                a = v1;
                b = v2;
            }
            void setDatabySum(complex o1, complex o2)           //function definition
            {
                a = o1.a + o2.a;
                b = o1.b + o2.b;
            }
            void printNumber(void)                          //function definition 
            {
                cout << "Your complex number is " << a << " + " << b << " i" << endl;
            }
    };
int main()
{
    complex c1,c2,c3;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c3.setDatabySum(c1,c2);
    c3.printNumber();

return 0; 
}