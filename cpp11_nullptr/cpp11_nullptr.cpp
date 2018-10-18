#include <iostream>

void test(int value)
{
    std::cout << "test(int) called with " << value << std::endl;
}

void test(const void *value)
{
    std::cout << "test(pointer) called with " << value << std::endl;
}

int main()
{
    test(123);
    test("abc");
    test(nullptr);
}
