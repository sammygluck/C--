#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv)
{
    std::string str;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            str = argv[i];
            for (std::string::size_type j = 0; j < str.size(); j++)
                std::cout << (char)toupper(str[j]);
            // if (argv[i + 1])
            //     cout << " ";
        }
        std::cout << std::endl;
    }
}