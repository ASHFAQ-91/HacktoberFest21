// apna college , video number 55, Inheritance there are five types of INHERITANCE.
// 4) Hybrid Inheritance
#include<iostream>
using namespace std;
class A {
    public:
        void Afunc()
        {
            cout << "Function A \n";
        }
};
class B : public A {        // class B Inheritance from class A
    public:
        void Bfunc()
        {
            cout << "Function B \n";
        }
};
class C {
    public:
        void Cfunc()
        {
            cout << "Function C \n";
        }
};
class D : public B, public C {          // class D Inheritance from B and C and as well as indirectly from A
    public:
        void Dfunc()
        {
            cout << "function D \n";
        }

};
int main()
{
    D obj;
    obj.Afunc();
    obj.Bfunc();
    obj.Cfunc();
    obj.Dfunc();
}