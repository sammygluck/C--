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

        //setting stuff
        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setNickName(std::string nn);
        void setPhoneNumber(std::string pn);
        void setDarkestSecret(std::string ds);
        // getting stuff
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
        void printContact(void);
        //other functions
}

class Phonebook
{
    private:
        //
        //...
    public:
        Phonebook(void);
        ~Phonebook(void);
        void createContact(void);
        void searchContact(void);
}