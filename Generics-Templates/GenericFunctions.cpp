#include <iostream>

template <typename T>
T CalcScore(T currScoreAmt, T addScoreAmt)
{
    return currScoreAmt + addScoreAmt;
}

int main()
{
    int n1, n2;

    std::cout << "Enter first integer number : ";
    std::cin >> n1;
    std::cout << "\nEnter second integer number : ";
    std::cin >> n2;

    std::cout << "\nAnswer : " << CalcScore(n1, n2) << std::endl;

    float f1, f2;

    std::cout << "\nEnter first float number : ";
    std::cin >> f1;
    std::cout << "\nEnter second flaot number : ";
    std::cin >> f2;

    std::cout << "\nAnswer : " << CalcScore(f1, f2) << std::endl;
}