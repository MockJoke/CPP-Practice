#include <iostream>
using namespace std;

class Test
{
public:
    Test() { count++; }
    ~Test() { count--; }

    static int getCount()
    {
        return count;
    }

private:
    static int count;
};

int Test::count = 0;

int main()
{
    Test t1, t2;
    
    cout << Test::getCount() << " "; // First output

    {
        Test t3;
        cout << Test::getCount() << " "; // Second output
    }

    cout << Test::getCount() << " "; // Third output

    return 0;
}
