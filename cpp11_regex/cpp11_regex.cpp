#include <iostream>
#include <regex>

int main()
{
    std::regex r1("pattern");
    if (std::regex_search("look for a pattern", r1))
        std::cout << "regex found pattern"; 
}
