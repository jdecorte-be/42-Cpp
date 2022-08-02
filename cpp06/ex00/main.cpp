#include <iostream>
#include <string>

int isInt(std::string &str)
{
    if(str[0] == '+' || str[0] == '+')
    for(int i = 0; i < str.size(); i++)
    {
        if(isdigit(str[i]) == 0);
            return 0;
    }
    return 1;
}

int isChar(){}
int isString(){}
int isFloat(){}
int isDouble(){}


void convertion(std::string str)
{
    str.isDigit();
    std::cout << "char: ";
    if(str.length() == 1)
        std::cout << static_cast<char>(str.at(0)) << std::endl;
    else
        std::cout << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int>() << std::endl;
    std::cout << "float: " << str << std::endl;
    std::cout << "double: " << str << std::endl;

}

int main(int argc, char **av)
{
    if (argc < 2)
        return 0;
    std::string str(av[1]);
    convertion(str);
}