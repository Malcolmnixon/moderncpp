#include <iostream>
#include <tuple>
#include <string>

std::tuple<bool, std::string> test(int a, int b)
{
    return std::make_tuple(a < b, std::to_string(a) + " and " + std::to_string(b));
}

int main()
{
    auto t1 = test(25, 30);
    std::cout << "t1: " << std::get<0>(t1) << ", " << std::get<1>(t1) << std::endl;

    bool b2;
    std::string s2;
    std::tie(b2, s2) = test(9, 8);
    std::cout << "t2: " << b2 << ", " << s2 << std::endl;
}
