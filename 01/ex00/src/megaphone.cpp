#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    string str;

    if (argc < 2)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";// << endl;
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            str = argv[i];
            for (string::size_type j = 0; j < str.size(); j++)
                cout << (char)toupper(str[j]);
            // if (argv[i + 1])
            //     cout << " ";
        }
        cout << endl;
    }
}