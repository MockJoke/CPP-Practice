#include <iostream>

class IShape 
{
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual void display() const = 0; // Pure virtual function
    virtual ~IShape() = default;
};

class Circle : public IShape 
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14 * radius * radius; }
    void display() const override { std::cout << "Circle" << std::endl; }
};

class Square : public IShape 
{
private:
    double side;
    
public:
    Square(double s) : side(s) {}
    double area() const override { return side * side; }
    void display() const override { std::cout << "Square" << std::endl; }
};

void printShapeArea(const IShape& shape) 
{
    shape.display();
    std::cout << "Area: " << shape.area() << std::endl;
}

int main() 
{
    Circle c(5.0);
    Square s(4.0);

    IShape* shape1 = &c;
    IShape* shape2 = &s;

    printShapeArea(*shape1);
    printShapeArea(*shape2);

    return 0;
}