// apna college , video number 55, Inheritance there are five types of INHERITANCE.
// 2) multiple inheritance.
#include<iostream>
using namespace std;
class A{
    public:
        void Afunc()
        {
            cout << "Function A \n";
        }
};
class B {
    public:
        void Bfunc()
        {
            cout << "Function B \n";
        }
};
class C : public A , public B {

};
int main()
{
    C obj;
    obj.Afunc();
    obj.Bfunc();
}