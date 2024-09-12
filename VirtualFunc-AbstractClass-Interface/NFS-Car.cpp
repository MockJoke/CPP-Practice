#include <iostream>
using namespace std;

class Vehicle
{
private:
    int engine = 0;
    int doors = 0;
    int capacity = 0;

public:
    virtual int GetEngine() const = 0;
    virtual void SetEngine(int e) = 0;

    virtual int GetDoors() const = 0;
    virtual void SetDoors(int d) = 0;

    virtual int GetCapacity() const = 0;
    virtual void SetCapacity(int c) = 0;

    virtual void StartVehicle() = 0;
    virtual void StopVehicle() = 0;
};

class Car : public Vehicle
{
    int engine = 0;
    int doors = 0;
    int capacity = 0;

public:
    int GetEngine() const override
    {
        return engine;
    }
    void SetEngine(int e) override
    {
        engine = e;
    }

    int GetDoors() const override
    {
        return doors;
    }
    void SetDoors(int d) override
    {
        doors = d;
    }

    int GetCapacity() const override
    {
        return capacity;
    }
    void SetCapacity(int c) override
    {
        capacity = c;
    }

    void StartVehicle() override
    {
        std::cout << "Starting Car" << std::endl;
    }

    void StopVehicle() override
    {
        std::cout << "Stopping Car" << std::endl;
    }
};

class Train : public Vehicle
{
    int engine = 0;
    int doors = 0;
    int capacity = 0;

public:
    int GetEngine() const override
    {
        return engine;
    }
    void SetEngine(int engineCC) override
    {
        engine = engineCC;
    }

    int GetDoors() const override
    {
        return doors;
    }
    void SetDoors(int d) override
    {
        doors = d;
    }

    int GetCapacity() const override
    {
        return capacity;
    }
    void SetCapacity(int c) override
    {
        capacity = c;
    }

    void StartVehicle() override
    {
        std::cout << "Starting Train" << std::endl;
    }

    void StopVehicle() override
    {
        std::cout << "Stopping Train" << std::endl;
    }
};

class Bike : public Vehicle
{
    int engine = 0;
    int doors = 0;
    int capacity = 0;

public:
    int GetEngine() const override
    {
        return engine;
    }
    void SetEngine(int engineCC) override
    {
        engine = engineCC;
    }

    int GetDoors() const override
    {
        return doors;
    }
    void SetDoors(int d) override
    {
        doors = d;
    }

    int GetCapacity() const override
    {
        return capacity;
    }
    void SetCapacity(int c) override
    {
        capacity = c;
    }

    void StartVehicle() override
    {
        std::cout << "Starting Bike" << std::endl;
    }

    void StopVehicle() override
    {
        std::cout << "Stopping Bike" << std::endl;
    }
};

int main()
{
    Vehicle *vehicle;

    vehicle = new Car;
    vehicle->StartVehicle();
    vehicle->StopVehicle();

    vehicle = new Train;
    vehicle->StartVehicle();
    vehicle->StopVehicle();

    vehicle = new Bike;
    vehicle->StartVehicle();
    vehicle->StopVehicle();
}