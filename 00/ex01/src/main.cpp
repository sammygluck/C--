#include "../incl/phonebook.hpp"

int main(void)
{
    std::string input;
    PhoneBook phonebook;

    while (1)
    {
        std::cout << "ENTER COMMAND>>";
        std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContacts();
        else if (input == "EXIT")
            break ;
        else
            std::cout << "ENTER VALID COMMAND" <<  std::endl; //which is.... (also possible to do in beginning)
    }
    return (0);
}
