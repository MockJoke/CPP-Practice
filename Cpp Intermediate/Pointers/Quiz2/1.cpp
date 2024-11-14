#include<iostream>
using namespace std;

int c = 4; 
void fun(int a , int b)
{
    a++;
    b++;
    c++;
    cout << a << " "<< b << " " << c << endl; 
}

int main()
{
    int a = 5;
    int b = 6;
    
    fun(a, b);
    fun(a, b);
    fun(a, b);
    
    return 0;
}