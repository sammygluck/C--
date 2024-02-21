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
        {
            std::cout << input << " IS INVALID COMMAND" << std::endl;
            std::cout << "VALID COMMANDS ARE: ADD/SEARCH/EXIT" <<  std::endl;
        }
    }
    return (0);
}
