// #include <iostream>

// class A
// {
// public:
//     void display()
//     {
//         std::cout << "Display from class A" << std::endl;
//     }
// };

// class B : public A 
// {
// };

// class C : public A 
// {
// };

// class D : public B, public C 
// {
// };

// int main()
// {
//     D obj;
//     obj.display();

//     return 0;
// }

// #include <iostream>

// class A
// {
// public:
//     void display()
//     {
//         std::cout << "Display from class A" << std::endl;
//     }
// };

// class B : public virtual A 
// {
// };

// class C : public virtual A 
// {
// };

// class D : public B, public C 
// {
// };

// int main()
// {
//     D obj;
//     obj.display();
    
//     return 0;
// }

// #include <iostream>

// class A
// {
// public:
//     virtual void display()
//     {
//         std::cout << "Display from class A" << std::endl;
//     }
// };

// class B : public virtual A 
// {
//     void display() override
//     {
//         std::cout << "Display from B" << std::endl;
//     }
// };

// class C : public virtual A 
// {
//     void display() override
//     {
//         std::cout << "Display from C" << std::endl;
//     }
// };

// class D : public B, public C 
// {
// };

// int main()
// {
//     D obj;
//     obj.display();
    
//     return 0;
// }

// #include <iostream>

// class A
// {
// public:
//     virtual void display()
//     {
//         std::cout << "Display from class A" << std::endl;
//     }
// };

// class B : public virtual A 
// {
// public:
//     void display() override
//     {
//         std::cout << "Display from B" << std::endl;
//     }
// };

// class C : public virtual A 
// {
// public:
//     void display() override
//     {
//         std::cout << "Display from C" << std::endl;
//     }
// };

// class D : public B, public C 
// {
// };

// int main()
// {
//     D obj;
//     obj.B::display();
//     obj.C::display();
    
//     return 0;
// }

#include <iostream>

class A
{
public:
    virtual void display()
    {
        std::cout << "Display from class A" << std::endl;
    }
};

class B : public virtual A 
{
public:
    void display() override
    {
        std::cout << "Display from B" << std::endl;
    }
};

class C : public virtual A 
{
public:
    void display() override
    {
        std::cout << "Display from C" << std::endl;
    }
};

class D : public B, public C 
{
public:
    void display() override
    {
        B::display();
        // C::display();
    }
};

int main()
{
    D obj;
    obj.display();
    obj.B::display();
    obj.C::display();
    
    return 0;
}