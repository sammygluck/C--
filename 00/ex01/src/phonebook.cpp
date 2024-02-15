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
        return ; //print message?
    for (int i = 0; i < 8; i++)
    {
        if (this->_contacts[i].isActive() == 0)
            break ;
        this->_contacts[i].contactPreview(i);
    }
    std::cin >> index;
    if (index > 7 || this->_contacts[index].isActive() == 0)
        return ;
    this->_contacts[index].printContact();
}