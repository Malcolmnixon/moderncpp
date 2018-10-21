#include <iostream>

int main()
{
    auto sum = [](auto a, auto b) { return a + b; };

    std::cout << "sum(1, 2) = " << sum(1, 2) << std::endl; 
    std::cout << "sum(1.5, 2.2) = " << sum(1.5, 2.2) << std::endl;
}
