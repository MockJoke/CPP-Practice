#include <iostream>
using namespace std;

class Base 
{
public:
    virtual void func(int x = 0) 
    {
        cout << "Base: " << x << endl;
    }
};

class Derived : public Base 
{
public:
    void func(int x = 1) 
    {
        cout << "Derived: " << x << endl;
    }
};

int main() 
{
    Base* b = new Derived();
    b->func();
    
    return 0;
}