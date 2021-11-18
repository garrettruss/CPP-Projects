#include <iostream>

int main()
{

    int number = 9;

    switch (number)
    {

    case 1:
        std::cout << "Turkey Sandwich\n";
        break;
    case 2:
        std::cout << "Ham Sandwich\n";
        break;
    case 3:
        std::cout << "Chili\n";
        break;
    case 4:
        std::cout << "Pasta\n";
        break;
    case 5:
        std::cout << "Salad\n";
        break;
    case 6:
        std::cout << "Pizza\n";
        break;
    case 7:
        std::cout << "Soup\n";
        break;
    case 8:
        std::cout << "Sushi\n";
        break;
    case 9:
        std::cout << "Fries\n";
        break;
    default:
        std::cout << "I love it all\n";
        break;
    }
}