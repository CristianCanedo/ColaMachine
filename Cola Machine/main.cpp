#include <iostream>

int main()
{
    unsigned short int selection;

    std::cout << "\nChoose a beverage!" << std::endl;
    std::cout << "\n1 - Coke";
    std::cout << "\n2 - Water";
    std::cout << "\n3 - Sprite";
    std::cout << "\n4 - Pepsi";
    std::cout << "\n5 - Dr Pepper" << std::endl;

    std::cout << "\nEnter your selection: ";
    std::cin >> selection;
    std::cout << std::endl;

    switch (selection)
    {
    case 1:
        std::cout << "Here is your Coke! Enjoy!\n";
        break;
    case 2:
        std::cout << "Here is your Water! Enjoy!\n";
        break;
    case 3:
        std::cout << "Here is your Sprite! Enjoy!\n";
        break;
    case 4:
        std::cout << "Here is your Pepsi! Enjoy!\n";
        break;
    case 5:
        std::cout << "Here is your Dr Pepper! Enjoy!\n";
        break;
    default:
        std::cout << "Error. Choice was not valid, here is your money back.\n";
        break;
    }

    return 0;
}
