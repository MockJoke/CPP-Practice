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

    int element_to_delete;

    std::cout << "Enter the element you want to delete from the array: ";
    std::cin >> element_to_delete;

    int to_be_deleted_element_index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element_to_delete)
        {
            to_be_deleted_element_index = i;
            break;
        }
    }

    if (to_be_deleted_element_index == -1)
    {
        std::cout << "Element not found. No deletion performed." << '\n';
    }
    else
    {
        for (int i = to_be_deleted_element_index; i < n - 1; i++)
        {
            arr[i] = arr[i+1];
        }

        n--;

        std::cout << "Element found and deleted." << '\n';
        std::cout << "Updated array: " << '\n';

        if (n == 0) 
        {
            std::cout << "Empty array\n"; 
        }
        else 
        {
            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << '\n';
            }
        }
    }

    return 0;
}