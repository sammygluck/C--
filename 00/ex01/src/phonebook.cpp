#include "../incl/phonebook.hpp"

//Phonebook
//add contact
    //create contact
        //add to last, if there are eight remove oldest


/*
phonebook:
    contacts holder
    create contact function
    search contact function


*/

//constructor - destructor
Phonebook::Phonebook()
{
    this->bookmark = 0;
    return ;
}

Phonebook::~Phonebook()
{
    return ;
}


//private


//public
void Phonebook::addContact()
{
    this->_contacts[this->bookmark].createContact();
    this->bookmark += 1;
    if (this->bookmark >= 8)
        this->bookmark = 0;
}