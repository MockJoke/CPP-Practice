#include <iostream>

class OperationsCore
{
public:
    virtual void executeTask()
    {
        std::cout << "Executing general task protocol.\n";
    }
};

class CyberAgent : public OperationsCore
{
public:
    void executeTask()
    {
        std::cout << "CyberAgent executing cybersecurity protocol.\n";
    }
};

class DataMiner : public OperationsCore
{
public:
    void executeTask()
    {
        std::cout << "DataMiner extracting data sets.\n";
    }
};

class LogisticsBot : public OperationsCore
{

};

int main()
{
    OperationsCore* operation1 = new CyberAgent();
    OperationsCore* operation2 = new DataMiner();
    OperationsCore* operation3 = new LogisticsBot();

    operation1->executeTask();
    operation2->executeTask();
    operation3->executeTask();

    return 0;
}