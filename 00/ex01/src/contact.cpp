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
    this->_active = 0;
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

std::string Contact::_printString(std::string attribute) const
{
    std::string result;
    std::string spaces;

    result = attribute;
    if (attribute.length() < 10)
    {
        size_t spacesNeeded = 10 - attribute.length();
        for (size_t i = 0; i < spacesNeeded; ++i)
            spaces += ' ';
        result = spaces + attribute;
    }
    else if (attribute.length() > 10)
        result = attribute.substr(0, 9) + ".";
    return (result);
}

//public
void Contact::createContact(void)
{
    this->_firstName = this->_getAttribute("First Name: ");
    this->_lastName = this->_getAttribute("Last Name: ");
    this->_nickName = this->_getAttribute("Nickname: ");
    this->_phoneNumber = this->_getAttribute("Phone Number: ");
    this->_darkestSecret = this->_getAttribute("Darkest Secret: ");
    this->_active = 1;
}

void Contact::contactPreview(int index) const
{
    std::cout << "         ";
    std::cout << index;
    std::cout << '|';
    std::cout << this->_printString(this->_firstName);
    std::cout << '|';
    std::cout << this->_printString(this->_lastName);
    std::cout << '|';
    std::cout << this->_printString(this->_nickName) << std::endl;

}

void Contact::printContact(void) const
{
    std::cout << this->_firstName << std::endl;
    std::cout << this->_lastName << std::endl;
    std::cout << this->_nickName << std::endl;
    std::cout << this->_phoneNumber << std::endl;
    std::cout << this->_darkestSecret << std::endl;
}

int Contact::isActive(void) const
{
    if (this->_active == 0)
        return (0);
    else
        return (1);
}

