// apna college , video number 55, Inheritance there are five types of INHERITANCE.
//1) single inheritance. 
#include<iostream>
using namespace std;
class A{
    public:
    void funcA()
    {
        cout << "Inheritated" ;
    }
};
class B : public A{
};

int main()
{
    B obj;
    obj.funcA();
}