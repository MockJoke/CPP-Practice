// #include <iostream>
// using namespace std;

// class car
// {
// public:
//     void engineDetails()
//     {
//         cout << "All the cars have engine!" << endl;
//     }
// };

// class hondaCity : public car
// {
// public:
//     void engineDetails()
//     {
//         cout << "Honda City engine is of 1200cc" << endl;
//     }
// };

// int main() 
// {
//     car* ptr = new hondaCity();
//     ptr->engineDetails();

//     return 0;
// }

#include <iostream>
using namespace std;

class car
{
public:
    virtual void engineDetails()
    {
        cout << "All the cars have engine!" << endl;
    }
};

class hondaCity : public car
{
public:
    void engineDetails()
    {
        cout << "Honda City engine is of 1200cc" << endl;
    }
};

int main() 
{
    car* ptr = new hondaCity();
    ptr->engineDetails();

    return 0;
}

// #include <iostream>
// using namespace std;

// class car
// {
// public:

// };

// class hondaCity : public car
// {
// public:
//     void engineDetails()
//     {
//         cout << "Honda City engine is of 1200cc" << endl;
//     }
// };

// int main() 
// {
//     car* ptr = new hondaCity();
//     ptr -> engineDetails();

//     return 0;
// }

#include <iostream>
using namespace std;

class car
{
public:
    virtual void engineDetails() = 0;
};

class hondaCity : public car
{
public:
    void engineDetails()
    {
        cout << "Honda City engine is of 1200cc" << endl;
    }
};

int main() 
{
    car* ptr = new hondaCity();
    ptr -> engineDetails();

    return 0;
}