#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    Complex c1(3, 5), c2(1, 2);
    Complex c3;
    c3 = c1 + c2;
    c3.display();

    c3 = c1 + 5; // Implicit conversion
    c3.display();

    return 0;
}