#include <iostream>
#include <vector>

int main() 
{
    std::vector<std::string> shoppingList;

    shoppingList.push_back("Apples");
    shoppingList.push_back("Milk");
    shoppingList.push_back("Bread");
    shoppingList.push_back("Eggs");

    std::cout << "The second item in shopping list: " <<shoppingList[1] << "\n";

    std::cout << "Shopping List:\n";

    for (auto i : shoppingList) 
    {
        std::cout << i << "\n";
    }

    return 0;
}