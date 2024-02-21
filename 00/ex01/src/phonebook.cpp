#include "../incl/phonebook.hpp"

//constructor - destructor
PhoneBook::PhoneBook()
{
    this->index = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

//public
void PhoneBook::addContact()
{
    this->_contacts[this->index].createContact();
    this->index += 1;
    if (this->index >= 8)
        this->index = 0;
}

void PhoneBook::searchContacts()
{
    int index;

    if (this->_contacts[0].isActive() == 0)
    {
        std::cout << "EMPTY PHONEBOOK" << std::endl;
        return ;
    }
    for (int i = 0; i < 8; i++)
    {
        if (this->_contacts[i].isActive() == 0)
            break ;
        this->_contacts[i].contactPreview(i);
    }
    std::cout << "ENTER INDEX OF DESIRED CONTACT>> ";
    std::cin >> index;
    if (std::cin.fail())
    {
        std::cin.clear(); // Clear the error flags
        std::cin.ignore(10000, '\n'); // Flush the buffer
        std::cout << "INVALID INPUT. PLEASE ENTER A NUMBER." << std::endl;
        return; // Return early to avoid further processing
    }
    std::cin.ignore(10000, '\n');
    if (index > 7 || this->_contacts[index].isActive() == 0)
        return ;
    this->_contacts[index].printContact();
}