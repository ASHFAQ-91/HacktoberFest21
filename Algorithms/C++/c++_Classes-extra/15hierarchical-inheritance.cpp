// apna college , video number 55, Inheritance there are five types of INHERITANCE.
// Hierarchical Inheritance
#include <iostream>
using namespace std;
class A
{
public:
    void Afunc()
    {
        cout << "Function A \n";
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "Function B \n";
    }
};
class C : public A
{
public:
    void Cfunc()
    {
        cout << "Function C \n";
    }
};
class D : public B
{
public:
    void Dfunc()
    {
        cout << "Function D \n";
    }
};
class E : public B
{
public:
    void Efunc()
    {
        cout << "Function E \n";
    }
};
class F : public C
{
public:
    void Ffunc()
    {
        cout << "Function F \n";
    }
};
class G : public C
{
public:
    void Gfunc()
    {
        cout << "Function G \n ";
    }
};
int main()
{
    G obj;
    obj.Afunc();
    obj.Cfunc();
    D obj2;             // we can't reuse same obj names FOR EG. we can't use 'obj' object because already used
    obj2.Afunc();
    obj2.Bfunc();
}