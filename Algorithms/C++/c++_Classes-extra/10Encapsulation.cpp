// Apna college , video number 54 , Encapsulation have 3 different types of Access Modifier
// 1) Public    2) Private  3) Protected
#include<iostream>
using namespace std;

class encapsulation
{
    public:
    void funA()
    {
        cout << "Function A\n";
    }
    private:
    void funB()
    {
        cout << "Function B\n";
    }
    protected:
    void funC()
    {
        cout << "Function C\n";
    }
};
int main()
{
    encapsulation a,b,c;
    a.funA();   // public:
    a.funA();   // Public:   ,   we can use same object many times
    // b.funB();   //  private:
    // c.funC();   // it gives ERROR because it is protected function
}