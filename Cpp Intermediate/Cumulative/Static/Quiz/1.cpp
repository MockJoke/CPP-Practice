#include <iostream>
using namespace std;

void fun()
{
    static int x = 5;
    int a = 6;
    x++;
    a++;
    cout << a << " " << x << " ";
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}