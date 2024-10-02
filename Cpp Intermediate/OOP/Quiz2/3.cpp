#include<iostream>
using namespace std;

class Base
{
private:
    int value;

public:
    Base(int v)
    {
        value = v;
    }

    int getValue()
    {
        return value;
    }
};

class Derived : public Base
{
public:
    Derived(int v) : Base(v)
    {
    }

    // void setValue(int v)
    // {
    //     // value = v; This will give compilation error because value is a private data member
    // }
};

int main()
{
    Derived a(10);

    // a.setValue(20);
    std::cout << a.getValue() << std::endl;

    return 0;
}