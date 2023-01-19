#include <iostream>

int main(int argc, char const *argv[])
{
    int first = 0;
    int func  = 0;
    int second = 0;
    std::cout << "Enter first number: ";
    std::cin >> first;
    std::cout << "Choose between:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division" << std::endl;
    std::cin >> func;
    std::cout << "Enter second number: ";
    std::cin >> second;
    switch (func)
    {
    case 1:
        std::cout << first + second << std::endl;
        break;
    case 2:
        std::cout << first - second << std::endl;
        break;
    case 3:
        std::cout << first * second << std::endl;
        break;
    case 4:
        std::cout << first / second << std::endl;
        break;
    default:
        std::cout << "No valid function choosen" << std::endl;
        break;
    }
    return 0;
}
