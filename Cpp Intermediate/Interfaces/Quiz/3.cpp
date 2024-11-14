#include <iostream>

class Base 
{
public:
    virtual void show() 
    {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() 
    {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base 
{
public:
    void show() override 
    {
        std::cout << "Derived class" << std::endl;
    }

    ~Derived() 
    {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() 
{
    Base* obj = new Derived();
    obj->show();
    delete obj;
    return 0;
}