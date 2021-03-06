#include <iostream>
#include <string>
#include <list>
#include <numeric>
#include <cmath>

struct Chaining
{
    std::list<std::string> values = { "first", ", second" };

    Chaining()
    {
        values.push_back(", third");
    }

    Chaining(const std::string &str) : Chaining()
    {
        values.push_back(str); 
    }
};

struct Base
{
    int value;

    Base(int _value) : value(_value) { }
};

struct Derived : public Base
{
    using Base::Base;
};

int main()
{
    Chaining c1;
    std::cout << "c1 = " << std::accumulate(c1.values.begin(), c1.values.end(), std::string()) << std::endl;

    Chaining c2(", fourth");
    std::cout << "c2 = " << std::accumulate(c2.values.begin(), c2.values.end(), std::string()) << std::endl;

    Derived d1(123);
    std::cout << "d1 = " << d1.value << std::endl;
}
