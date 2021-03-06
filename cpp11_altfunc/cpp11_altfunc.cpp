#include <iostream>
#include <string>

auto addInt(int a, int b) -> int 
{ 
    return a + b;
}

template<typename A, typename B> auto addGeneric(A a, B b) -> decltype(a + b)
{
    return a + b;
}

int main()
{
    std::cout << "addInt(1, 2) = " << addInt(1, 2) << std::endl; 
    std::cout << "addGeneric(2, 3) = " << addGeneric(2, 3) << std::endl;
    std::cout << "addGeneric(3, 4.4) = " << addGeneric(3, 4.4) << std::endl;
    std::cout << "addGeneric(std::string(\"foo\"), std::string(\"baa\")) = " << addGeneric(std::string("foo"), std::string("baa")) << std::endl;
}
