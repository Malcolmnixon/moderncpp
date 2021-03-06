#include <iostream>

enum class Days
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

enum Powers : unsigned long
{
    None = 1U,
    Deca = 10U,
    Hecto = 100U,
    Kilo = 1000U,
    Mega = 1000000U
};

int main()
{
    std::cout << "Wednesday == Sunday is " << (Days::Wednesday == Days::Sunday) << std::endl; 

    std::cout << "Mega is " << Powers::Mega << std::endl;
}
