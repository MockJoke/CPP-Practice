#include <iostream>

class MasterMachine 
{
public:
    MasterMachine() 
    {
        std::cout << "Master Machine activated\n";
    }

    ~MasterMachine() 
    {
        std::cout << "Master Machine decommissioned\n";
    }    
};

class AssistanceDrone : public MasterMachine
{
public:
    AssistanceDrone() 
    {
        std::cout << "Assistant Drone deployed\n";
    }

    ~AssistanceDrone() 
    {
        std::cout << "Assistant Drone dismantled\n";
    }     
};

int main()
{
    MasterMachine masterMachine;
    AssistanceDrone assistanceDrone;
    
    return 0;
}