#include<iostream>

int main()
{
    int arr[15];

    for (int i = 0; i < 15; i++) 
    {
        if (i % 2 != 0)
        {
            arr[i] = i*3;
        }
        else
        {
            arr[i] = i*2;
        }
    }

    std::cout << "Array:" << '\n';

    for (int i = 0; i < 15; i++)
    {
        std::cout << arr[i] << '\n';
    }    

    return 0;
}