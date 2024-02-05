#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        //all the input fields
        int _active;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
        std::string _getAttribute(std::string message);
        std::string _printString(std::string attribute) const;
    public:
        Contact(void);
        ~Contact(void);

        void createContact(void);
        void printContact(void) const;
        void contactPreview(int index) const;
        int isActive(void) const;
};

#endif