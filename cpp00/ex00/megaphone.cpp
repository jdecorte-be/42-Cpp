#include <iostream>
#include <string.h>
#include <locale> 

int main(int argc, char **argv)
{
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for(int j = 0; str[j]; j++)
                std::cout << (char)std::toupper(argv[i][j]);
        }
        std::cout << std::endl;
    }
}