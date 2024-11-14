#include <iostream>
#include <string>

class Robot
{
public:    
    std::string name;
    std::string task;  
};

int main()
{
    Robot* robot1 = new Robot();
    robot1->name = "Robot1";
    robot1->task = "Mop the floor";

    std::cout << "Robot's name: " << robot1->name << "\nRobot's task: " << robot1->task << "\n";

    delete robot1;

    Robot* robot2 = new Robot();
    robot2->name = "Robot2";
    robot2->task = "Assembling Parts";

    std::cout << "Robot's name: " << robot2->name << "\nRobot's task: " << robot2->task;

    delete robot2;

    return 0;
}