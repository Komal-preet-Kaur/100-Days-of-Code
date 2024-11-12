#include <iostream>

using namespace std;

class Base // class
{
    int a;

public:
    Base() // constructor
    {
        a = 20;
    }
    void show() // function
    {
        cout << "\n a = " << a;
    }
};

class Derived : public Base
{
    int b;

public:
    Derived()
    {
        b = 25;
    }
    void show()
    {
        cout << "\n b = " << b;
    }
};

// the base class function can be invoked by the derived class object using the scope resolution operator.

int main()
{
    Derived D;
    D.Base::show();
    D.show();
    return 0;
}
