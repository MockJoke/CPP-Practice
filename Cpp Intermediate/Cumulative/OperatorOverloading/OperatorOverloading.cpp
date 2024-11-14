#include <iostream>
using namespace std;

class multiply
{
    int num;

public:
    void setData(int a)
    {
        num = a;
    }

    void display()
    {
        cout << num << endl;
    }

    multiply operator*(multiply c);
};

// Operator overloading for '*'
multiply multiply::operator*(multiply c)
{
    multiply temp;
    temp.num = num * c.num;
    return temp;
}

int main()
{
    multiply obj1, obj2, obj3;
    obj1.setData(2);
    obj2.setData(5);
    obj3 = obj1 * obj2;     // Using overloaded '*' operator
    obj3.display();         // Display result

    return 0;
}