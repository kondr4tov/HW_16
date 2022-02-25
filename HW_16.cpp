#include <iostream>
#include <sstream>

int main()
{
    std::string str;

    std::cout << "Input string: ";
    std::getline(std::cin, str);

    std::cout << "String: " << str << std::endl;
    std::cout << "Lenght: " << str.length() << std::endl;

    int n = str.length() - 1;

    std::cout << "First symbol: " << str[0] << std::endl;
    std::cout << "Last symbol: " << str[n];

    return 0;
}
