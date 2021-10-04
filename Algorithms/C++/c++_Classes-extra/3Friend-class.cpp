#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class complex; // forward declaration
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class calculator //class 1st
{
public:
    int sumRealComplex(complex, complex); //prototype function (((3)))     //it's not a function of 'class complex' (((2)))
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class complex //class 2nd
{
    int a, b;                                                 //default private      //'class complex's' private variables
    friend int calculator ::sumRealComplex(complex, complex); //give some permission to 'sumRealComplex' function (((2)))

public:
    void setNumber(int v1, int v2); //function prototype  (((1)))

    void printNumber() //function definition
    {
        cout << " Your number is " << a << " + " << b << endl;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void complex ::setNumber(int v1, int v2) //function definition  (((1)))
{
    a = v1;
    b = v2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int calculator ::sumRealComplex(complex o1, complex o2) //function definition (((3)))
{
    // int o3;
    // o3.printNumber((o1.a+o2.a), (o2.b + o2.b));
    return (o1.a + o2.a);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    complex c1, c2;     //c1 and c2 are object of the 'class complex'
    c1.setNumber(1, 6); //only same 'class object calls' to the same 'class function'
    c1.printNumber();   //only same 'class object calls' to the same 'class function'

    c2.setNumber(4, 3); //only same 'class object calls' to the same 'class function'
    c2.printNumber();   //only same 'class object calls' to the same 'class function'

    calculator calc; //calc is a object of the 'class calculator'
    int res = calc.sumRealComplex(c1, c2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;

    return 0;
}