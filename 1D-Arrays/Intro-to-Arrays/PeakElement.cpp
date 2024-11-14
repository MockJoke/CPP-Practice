#include<iostream>

int main()
{
    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n; 

    int arr[n];

    if (n == 0)
        return 0;

    std::cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    std::cout << "Peak elements of the array:" << '\n';

    for (int i = 0; i < n; i++)
    {
        if (i == 0)     // first element
        {
            if (arr[i] >= arr[i+1])
            {
                std::cout << "value: " << arr[i] << " at index: " << i << '\n';    
            }
        }
        else if (i == n-1)      // last element
        {
            if (arr[i] >= arr[i-1])
            {
                std::cout << "value: " << arr[i] << " at index: " << i << '\n';    
            }
        }
        else
        {
            if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
            {
                std::cout << "value: " << arr[i] << " at index: " << i << '\n';    
            }
        }
    }

    return 0;
}