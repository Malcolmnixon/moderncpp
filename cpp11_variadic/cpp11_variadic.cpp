#include <iostream>
#include <string>

template <typename T> 
T add(T value)
{
    return value;
}

template <typename T, typename ... Rest>
T add(T value, Rest... rest)
{
    return value + add(rest...);
}

template <typename T>
std::string join(const std::string &, T value)
{
    return std::to_string(value);
}

template <typename T, typename ... Rest>
std::string join(const std::string &sep, T value, Rest... rest)
{
    return std::to_string(value) + sep + join(sep, rest...);
}

int main()
{
    std::cout << "add(1) = " << add(1) << std::endl;
    std::cout << "add(1, 2, 3) = " << add(1, 2, 3) << std::endl;
    std::cout << "add(std::string(\"hello\"), std::string(\"world\")) = " << add(std::string("hello"), std::string("world")) << std::endl;
    std::cout << "join(\", \", 1, 2, 3.4) = " << join(", ", 1, 2, 3.4) << std::endl;
}
