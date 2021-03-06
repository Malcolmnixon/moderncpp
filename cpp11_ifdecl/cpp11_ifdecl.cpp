#include <iostream>

struct A 
{
    virtual ~A() { }
};

struct B : A 
{
    int value;
    B(int _value) : value(_value) { }
};

void printType(A *value)
{
    if (B *bValue = dynamic_cast<B*>(value))
        std::cout << "Value is B(" << bValue->value << ")" << std::endl;
    else
        std::cout << "Value is A" << std::endl;
}

int main()
{
    A a;
    B b{ 10 };

    printType(&a);
    printType(&b);
}
