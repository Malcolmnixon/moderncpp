#include <iostream>
#include <array>

constexpr int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    std::array<int, factorial(3)> a = { 1, 2, 3, 4, 5, 6 };

    std::cout << "a is of size " << a.size() << std::endl; 
}
