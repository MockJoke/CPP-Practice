#include <iostream>

class Transaction
{
public:    
    void process()
    {
        std::cout << "Processing a standard transaction.\n";
    }
};

class CreditTransaction : public Transaction
{
public:    
    void process()
    {
        std::cout << "Processing a credit transaction.\n";
    }
};

int main()
{
    CreditTransaction creditTransaction;
    creditTransaction.process();

    creditTransaction.Transaction::process();

    return 0;
}