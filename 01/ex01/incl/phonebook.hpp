#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        //all the input fields
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
        std::string _getAttribute(std::string message);
    public:
        Contact(void);
        ~Contact(void);

        void createContact(void);
        void printContact(void) const;
}

class Phonebook
{
    private:
        Contact _contacts[8];
        int bookmark;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void addContact(void);
        void searchContacts(void);
}

#endif