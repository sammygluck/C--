#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);

        struct ComplainLevel
        {
            std::string level;
            // void(*func)(void);
            void (Harl::*func)(void);
        };
        ComplainLevel complaintLevels[4];

    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};

#endif