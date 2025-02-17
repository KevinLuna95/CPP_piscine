#include <iostream>
#include <string> 
#include <algorithm>

int main (int argc, char **argv)
{
    int     i;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        if(!argv[1][0])
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        else{
            while (argv[i])
            {
                
                std::string str(argv[i]);
                std::transform(str.begin(), str.end(), str.begin(), ::toupper);
                std::cout << str;
                i++;
            }
            std::cout << std::endl;
        }
    }
    return (0);
}