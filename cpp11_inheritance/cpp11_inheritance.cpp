#include <iostream>
#include <string>

struct Base
{
    int value;

    Base(int _value) : value(_value) { }

    virtual std::string describe() const = 0;
};

struct Test1 : public Base
{
    using Base::Base;

    std::string describe() const override
    {
        return std::string("Test1 containing ") + std::to_string(value);
    }
};

struct Test2 final : public Test1
{
    using Test1::Test1;

    std::string describe() const final
    {
        return std::string("Test2 containing ") + std::to_string(value);
    }
};

int main()
{
    Test1 t1(123);
    std::cout << "t1 = " << t1.describe() << std::endl; 

    Test2 t2(234);
    std::cout << "t2 = " << t2.describe() << std::endl;
}
