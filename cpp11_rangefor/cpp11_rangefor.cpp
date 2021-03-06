#include <iostream>
#include <array>
#include <list>
#include <string>

int main()
{
    // Range-for over c-array
    std::cout << "C-array items:";
    std::string carray[]{ "hello", "world" };
    for (const auto &str : carray)
    {
        std::cout << ' ' << str;
    }
    std::cout << std::endl;

    // Range-for over std::array
    std::cout << "std::array items:";
    std::array<std::string, 2> stdarray{ "hello", "world" };
    for (const auto &str : stdarray)
    {
        std::cout << ' ' << str;
    }
    std::cout << std::endl;

    // Range-for over std::list
    std::cout << "std::list items:";
    std::list<std::string> stdlist{ "hello", "world" };
    for (const auto &str : stdlist)
    {
        std::cout << ' ' << str;
    }
    std::cout << std::endl;
}
