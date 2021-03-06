#include <iostream>
#include <optional>
#include <cmath>

std::optional<double> optSqrt(double v)
{
    if (v < 0)
        return {};

    return std::sqrt(v);
}

int main()
{
    std::cout << "optSqrt(100) = ";
    if (auto v = optSqrt(100))
        std::cout << v.value() << std::endl;
    else
        std::cout << "undefined" << std::endl;

    std::cout << "optSqrt(-100) = ";
    if (auto v = optSqrt(-100))
        std::cout << v.value() << std::endl;
    else
        std::cout << "undefined" << std::endl;
}
