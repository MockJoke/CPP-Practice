#include<iostream>
using namespace std;

void fun(int* ptr)
{
    *(ptr)++;
}

int main()
{
    int *ptr = new int(5);
    
    fun(ptr);
    
    cout << *ptr << endl;
    
    return 0;
}