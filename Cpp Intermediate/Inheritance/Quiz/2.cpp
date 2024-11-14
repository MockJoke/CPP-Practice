#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Parent class display() method" << endl;
    }
};

class Child : public Parent
{
public:
    void display(int x)
    {
        cout << "Child class display() method with argument: " << x << endl;
    }
};

int main()
{
    Child childObj;
    // childObj.display();

    return 0;
}