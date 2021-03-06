#include <iostream>

struct Test
{
    int val1;
    int val2;

    explicit Test(int _val1) : val1(_val1), val2(0) { }
    explicit Test(int _val1, int _val2) : val1(_val1), val2(_val2) { }
    explicit operator bool() const { return val1 + val2 != 0; }
};

int main()
{
    Test t1(10);
    if (t1) std::cout << "t1 is true" << std::endl;

    Test t2(10, -10);
    if (!t2) std::cout << "t2 is false" << std::endl;

    Test t3{ 5, 10 };
    if (t3) std::cout << "t3 is true" << std::endl;
}
