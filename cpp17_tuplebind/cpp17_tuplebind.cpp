#include <iostream>
#include <tuple>
#include <string>
#include <map>

std::tuple<bool, std::string> test(int a, int b)
{
    return std::tuple(a < b, std::to_string(a) + " and " + std::to_string(b));
}


int main()
{
    auto [b,s] = test(25, 30);
    std::cout << "test: " << b << ", " << s << std::endl;

    std::map<int, std::string> test{ { 1, "one"}, {2, "two"}, {3, "three"} };
    for (auto[key, value] : test)
    {
        std::cout << key << " = " << value << std::endl;
    }
}
