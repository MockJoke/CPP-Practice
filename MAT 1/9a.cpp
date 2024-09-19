#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator()
    {
        cout << "Calculator Class Default Constructor" << endl;
    }
};

class Add : Calculator
{
public:
    Add()
    {
        cout << "Add Class Default Constructor" << endl;
    }
};

int main()
{
    Add objAdd;
    return 0;
}