#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class show() method" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show() method" << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Which show() will be called?

    return 0;
}