// apan college  , video number 53 , parameter constructor, without using private variables.
#include <iostream>
using namespace std;

class student //student is a class
{
    string n; // Default as a private variables
    int a;
    bool g;

public:
    student() // Default Constructor
    {
        cout << "\n\tDefault Constructor" << endl;
    }
    student(string name, int age, bool gender) // Parameterised Constructor
    {
        cout << "\nParameter Constructor  ";
        n = name;
        a = age;
        g = gender;
        cout << n << "   " << a << "   " << g;
    }
    student(student &d) //  Copy Constructor or Shallow Copy Constructor
    {
        cout << "\nCopy Constructor  ";
        n = d.n;
        a = d.a;
        g = d.g;
        cout << n << "  " << a << "    " << g;
    }
    ~student() //  Destructor
    {
        cout << "\n\tDestructor Called  ";
    }
    bool operator==(student &f)
    {
        if (n == f.n && a == f.a && g == f.g)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    //We can't Call the Constructor again with the previous used object, that why we are create new object.
    student d("Neha", 19, 1);   // constructor automatically call
    student e;                  //Default Constructor
    student f("Ashfaq", 18, 0); // Parameter Constructor
    student g;                  //we can't call the default constructor again with the same object(e) that why using (g) D.C.
    student h("Mudit", 18, 0);  // Parameter Constructor
    student i;                  //  D.C.
    student j(d);               //  Copy Constructor

    if (f == d) //  Over load == operator
    {
        cout << "\nsame" << endl;
    }
    else
    {
        cout << "\nnot same" << endl;
    }
}