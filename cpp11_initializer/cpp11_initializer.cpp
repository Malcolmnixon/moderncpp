#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>

struct Simple
{
    float fval;
    std::string sval;
};

class Complex
{
    float fval;
    std::string sval;
public:
    Complex(float _fval, std::string &&_sval) : fval(_fval), sval(_sval)
    {
    }
};

int main()
{
    Simple simpleInst1 = { 1.2f, "hello" };
    Simple simpleInst2({ 1.2f, "hello" });
    Simple simpleInst3{ 1.2f, "hello" };
    Simple simpleArray[] = { { 1.0f, "first" }, { 2.0f, "second" } };
    Complex complexInst = { 2.3f, "world" };
    Complex complexArray[] = { { 1.5f, "first" }, { 2.5f, "second" } };
    std::array<int, 2> intArray = { 1, 2 };
    std::vector<std::string> stringVector = { "first", "second", "third" };
    std::list<int> intList = { 3, 2, 1 };
    std::map<int, std::string> intStringMap = { { 1, "first" }, { 2, "second" } };
}
