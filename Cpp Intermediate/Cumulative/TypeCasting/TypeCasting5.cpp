#include <iostream>
using namespace std;

class Animal
{
    virtual void sound() {} // Virtual function makes the class polymorphic
};

class Dog : public Animal
{
};

int main()
{
    Animal *animal = new Dog();             // Pointer to an Animal, but it's actually a Dog
    Dog *dog = dynamic_cast<Dog *>(animal); // Safe cast

    if (dog)
    {
        // The cast was successful, 'animal' is actually a Dog
        cout << "This is a dog!" << endl;
    }
    else
    {
        // The cast failed, 'animal' was not a Dog
        cout << "This is not a dog." << endl;
    }

    return 0;
}