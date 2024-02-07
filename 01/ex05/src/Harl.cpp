#include "../incl/Harl.hpp"

//constructor - destructor
Harl::Harl()
{
    complaintLevels[0].level = "DEBUG"; 
    complaintLevels[0].func = &Harl::_debug;
    complaintLevels[1].level = "INFO";
    complaintLevels[1].func = &Harl::_info;
    complaintLevels[2].level = "WARNING";
    complaintLevels[2].func = &Harl::_warning;
    complaintLevels[3].level = "ERROR";
    complaintLevels[3].func = &Harl::_error;
    return ;
}

Harl::~Harl()
{

}

//private
void Harl::_debug()
{
    std::cout << "debug" << std::endl;
}

void Harl::_info()
{
    std::cout << "info" << std::endl;
}

void Harl::_warning()
{
    std::cout << "warning" << std::endl;
}

void Harl::_error()
{
    std::cout << "error" << std::endl;
}

//public
void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; ++i)
    {
        if (this->complaintLevels[i].level == level)
        {
            (this->*complaintLevels[i].func)();
            return;
        }
    }
    std::cout << "Unknown complain level: " << level << std::endl;
}

