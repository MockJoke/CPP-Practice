#include<iostream>
#include<vector>

int main() 
{
    std::vector<int> v = {1, 2, 3, 4};
    auto it = v.begin() + 1;    // Points to the second element (2)

    v.erase(it);    // Erases the second element (2), so vector becomes {1, 3, 4}
    
    std::cout << *it;   // Tries to dereference 'it' (previously pointing to 2)

    return 0;
}

// #include<iostream>
// #include<vector>

// int main() 
// {
//     std::vector<int> v = {1, 2, 3, 4};
//     auto it = v.begin() + 1;

//     it = v.erase(it);  // Update iterator to the next valid element

//     std::cout << *it;  // Output will still be 3
    
//     return 0;
// }