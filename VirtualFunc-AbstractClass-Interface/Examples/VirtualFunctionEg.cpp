#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void show()
    {
        cout << "Base class show is invoked" << endl;
    }

    void display()
    {
        cout << "Base class display is invoked" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void show()
    {
        cout << "Derived class show is invoked" << endl;
    }

    void display()
    {
        cout << "Derived class display is invoked" << endl;
    }
};

int main()
{
    BaseClass *bPointer;
    DerivedClass dObj1;

    bPointer = &dObj1;

    bPointer->show();
    bPointer->display();

    DerivedClass *dPointer;
    DerivedClass dObj2;

    dPointer = &dObj2;

    dPointer->show();
    dPointer->display();
}