#include <iostream>

namespace A::B
{
    auto foo(int x)
    {
        return x * x;
    }
}

int main()
{
    std::cout << "A::B::foo(12) = " << A::B::foo(12) << std::endl; 
}
