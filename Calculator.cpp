#include <iostream>
#include <string>

int main()
{
    std::cout << "----------------" << std::endl;
    std::cout << "|  Calculator  |" << std::endl;
    std::cout << "|  by patzet7  |" << std::endl;
    std::cout << "----------------" << std::endl;

    double a, b;

    begin: 
    
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> a;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> b;

    std::cout << "What do you want to do with entered numbers?" << std::endl;
    std::cout << "Possible options: +; -; *; /" << std::endl;

    char sign;

    std::cin >> sign;

    switch (sign)
    {
        case '+':
            std::cout << a << " + " << b << " = " << (a + b) << std::endl;
            break;
        case '-':
            std::cout << a << " - " << b << " = " << (a - b) << std::endl;
            break;
        case '*':
            std::cout << a << " * " << b << " = " << (a * b) << std::endl;
            break;
        case '/':
            if (b != 0)
            {
                std::cout << a << " / " << b << " = " << (a / b) << std::endl;
            }
            else
            {
                std::cout << "Do not divide by 0!" << std::endl;
            }
            break;
        default:
            std::cout << "Incorrect sign entered!" << std::endl;
    }

    std::string sign2;

    std::cout << "Do you want to continue? (Y/N)" << std::endl;

    std::cin >> sign2;

    if (sign2 == "y" || sign2 == "Y")
    {
        goto begin;
    }
}
