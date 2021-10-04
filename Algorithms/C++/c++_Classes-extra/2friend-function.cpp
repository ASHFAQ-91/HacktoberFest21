// video no. 26
/*  Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object 
   of that class. sum.sumcomplex() == invalid
3. can be invoked without the help of any object
4. Usually contains the objects as arguments
5. can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name
   to access any member.
*/
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class complex //complex is a class
{
    int a, b; // default as a private       // private variable or identifier can't be used in 'int main ()'

public:                            //down below publicly diclare function
    void setNumber(int v1, int v2) //function definition
    {
        a = v1;
        b = v2;
    }
    void printNumber() //function definition        //member of class complex
    {
        cout << a << " + " << b << "i\n";
    }

    friend complex sumcomplex(complex o1, complex o2); //give some permission to sumcomplex function
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
complex sumcomplex(complex o1, complex o2) //it's not a member of the class complex (((1)))
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    complex c1, c2, sum; //c1,c2,sum are complex object
    c1.setNumber(1, 4);  //setNumber is a member of a class complex. so, we can use this function with object
    c1.printNumber();    //printNumber is a member of a class complex. so, we can use this function with object

    c2.setNumber(5, 4);
    c2.printNumber();

    sum = sumcomplex(c1, c2); // (((1)))  so, we can't use this function with object
    sum.printNumber();

    return 0;
}