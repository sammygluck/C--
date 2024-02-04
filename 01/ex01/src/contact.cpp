        // _firstName;
        // _lastName;
        // _nickName;
        // _phoneNumber;
        // _darkestSecret;

    //create contact
        //set each attribute
            //while not set ask for valid text

#include "../incl/phonebook.hpp"


//constructor - destructor
Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return ;
}

//private
std::string Contact::_getAttribute(std::string message)
{
    std::string attribute;

    while (1)
    {
        std::cout << message;
        std::getline(std::cin, attribute);
        if (attribute != "")
            break ;
    }
    return (attribute);
}

//public
void Contact::createContact(void)
{
    this->_firstName = this->_getAttribute("First Name: ");
    this->_lastName = this->_getAttribute("Last Name: ");
    this->_nickName = this->_getAttribute("Nickname: ");
    this->_phoneNumber = this->_getAttribute("Phone Number: ");
    this->_darkestSecret = this->_getAttribute("Darkest Secret: ");
}

