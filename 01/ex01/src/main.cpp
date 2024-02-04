/*
A: MAIN
1. while loop waiting for commands
2. if command is add
    prompt the user for information
    add the information to the contact
    add the contact to the phonebook
3. if command is to search
    search behaviour
4. if the command is exit
    exit

B: CONTACT

C: PHONEBOOK

*/

int main(void)
{
    std::string input;

    while (1)
    {
        std::cout << "ENTER COMMAND>>";
        std::getline(std::cin, input);
        if (input == "ADD")
            //add
        else if (input == "SEARCH")
            //search
        else if (input == "EXIT")
            break ;
        else
            std::cout << "ENTER VALID COMMAND" <<  std::endl; //which is.... (also possible to do in beginning)
    }
    return (0);
}

class Contact
{
private:
    /* data */
public:

    contact(/* args */);
    ~contact();
};

contact::contact(/* args */)
{
}

contact::~contact()
{
}
