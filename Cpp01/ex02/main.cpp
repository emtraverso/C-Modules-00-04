#include <iostream>
#include <string>

int main ()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "String: " << s << std::endl;
    std::cout << "Pointer: " << *stringPTR << std::endl;
    std::cout << "Reference: " << stringREF << std::endl;
    std::cout << "Memory address of the string variable: " << &s << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
}