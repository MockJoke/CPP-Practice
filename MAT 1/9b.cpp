#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator()
    {
        cout << "Calculator Class Default Constructor" << endl;
    }

    ~Calculator()
    {
        cout << "Calculator Class Default Destructor" << endl;
    }
};

class Add : Calculator
{
public:
    Add()
    {
        cout << "Add Class Default Constructor" << endl;
    }

    ~Add()
    {
        cout << "Add Class Default Destructor" << endl;
    }
};

int main()
{
    Add objAdd;
    return 0;
}