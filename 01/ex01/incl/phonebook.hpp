#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(void);
        void searchContacts(void);
};

#endif