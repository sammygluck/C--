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
    public:
        Contact(void);
        ~Contact(void);
        void createContact(void);
        void printContact(void);
        //other functions
}

class Phonebook
{
    private:
        //contact array
        //...
    public:
        Phonebook(void);
        ~Phonebook(void);
        void addContact(void);
        void searchContact(void);
}