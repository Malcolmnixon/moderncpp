#include <iostream>
#include <functional>

int main()
{
    std::function<int(int, int)> f1 = [](int a, int b) { return a + b; };
    std::cout << "f1(1, 2) = " << f1(1, 2) << std::endl;

    auto f2 = [](int a, int b) { return a + b; };
    std::cout << "f2(2, 3) = " << f2(2, 3) << std::endl;

    auto f3 = [](int a, int b) -> double { return a + b; };
    std::cout << "f3(3, 4) / 2 = " << f3(3, 4) / 2 << std::endl;

    int tmp = 0;
    auto f4 = [&tmp](int a) { return tmp += a; };
    std::cout << "f4(1) = " << f4(1) << std::endl;
    std::cout << "f4(9) = " << f4(9) << std::endl;
    std::cout << "f4(5) = " << f4(5) << std::endl;
}
