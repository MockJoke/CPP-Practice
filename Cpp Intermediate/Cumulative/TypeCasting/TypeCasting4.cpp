#include <iostream>
using namespace std;

int main()
{
    int num = 8;
    double b = static_cast<double>(num); // Convert int to double
    cout << b << endl;                   // Output: 8.0

    return 0;
}