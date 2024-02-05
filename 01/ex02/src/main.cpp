#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Address of string variable: " << &brain << std::endl;
    std::cout << "Address of stringPTR variable: " << stringPTR << std::endl;
    std::cout << "Address of stringREF variable: " << &stringREF << std::endl;

    std::cout << "Value of the string variable: " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}