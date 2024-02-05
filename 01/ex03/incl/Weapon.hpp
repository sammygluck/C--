#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        ~Weapon();

        std::string getType() const;
        void setType(std::string newType);
};