#include<iostream>
using namespace std;

int* allocateMemory() 
{
    int* ptr = new int(100);  // Dynamically allocate memory and initialize to 100
    return ptr;
}

int main() 
{
    int* p1 = allocateMemory();
    int* p2 = allocateMemory();

    cout << *p1 << " " << *p2 << endl;  // First output

    delete p1;
    delete p2;

    p1 = new int(50);  // Allocate new memory after deletion
    cout << *p1 << endl;  // Second output

    delete p1;

    return 0;
}