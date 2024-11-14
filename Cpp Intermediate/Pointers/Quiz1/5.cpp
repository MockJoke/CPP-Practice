#include<iostream>
using namespace std;

void function(int* ptr) 
{
    int x = 5;
    ptr = &x;
}

int main()
{   
   int *ptr;
   function(ptr);
     
   cout << *ptr << endl;
}