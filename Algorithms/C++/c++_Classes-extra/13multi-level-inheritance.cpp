// apna college , video number 55, Inheritance there are five types of INHERITANCE.
// 3) Multi level inheritance.
#include<iostream>
using namespace std;
class A {
    public: 
        void Afunc()
        {
            cout << "Function A \n";
        }
};
class B : public A {
    public:
        void Bfunc()
        {
            cout << "Function B \n";
        }
};
class C : public B {
    public:
        void Cfunc()
        {
            cout << "Function C \n";
        }
};
int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
    obj.Cfunc();
}
