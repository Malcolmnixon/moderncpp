#include <iostream>
#include <type_traits>
#include <string>

template <typename T> std::string to_string(T value)
{
    if constexpr(std::is_same<T, std::string>::value)
        return value;
    else
        return std::to_string(value);
}

int main()
{
    std::cout << "to_string(123) = " << to_string(123) << std::endl;
    std::cout << "to_string(123.45) = " << to_string(123.45) << std::endl;
    std::cout << "to_string(std::string(\"foo\")) = " << to_string(std::string("foo")) << std::endl;
}
