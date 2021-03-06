#include <iostream>

int main()
{
    auto intNum = 123;
    std::cout << "intNum is " << intNum << std::endl;

    auto floatNum = 123.45;
    std::cout << "floatNum is " << floatNum << std::endl;

    auto lambda = [](int a, int b) { return a + b; };
    std::cout << "lambda(1, 2) is " << lambda(1, 2) << std::endl;
    std::cout << "lambda(10, 20) is " << lambda(10, 20) << std::endl;

    std::cout << "iteration of";
    for (auto i : { 1, 2, 3 })
        std::cout << " " << i;
    std::cout << std::endl;
}
