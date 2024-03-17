#include <iostream>
#include <string>

// Assume read function that reads strings from input
void read(std::string &...args)
{
    std::cout << "Enter " << sizeof...(args) << " strings: ";
    ((std::cin >> args), ...);
}

#define STR(...)             \
    std::string __VA_ARGS__; \
    read(__VA_ARGS__)

int main()
{
    STR(name, address);

    std::cout << "You entered name: " << name << std::endl;
    std::cout << "You entered address: " << address << std::endl;

    return 0;
}
