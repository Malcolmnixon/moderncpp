#include <iostream>

int square(int in)
{
    return in * in;
}

int main()
{
    if (int v = square(10); v > 20)
        std::cout << "10 squared (" << v << ") is greater than 20" << std::endl;
}
