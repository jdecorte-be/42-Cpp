#include <iostream>
#include <string>
#include "conv.hpp"


void convertion(std::string &str)
{
    if(isInt(str) == true)
    {
        double i = std::stod(str);

        std::cout << "char: ";
        if(i > 255 || i < 0)
            std::cout << "Overflow of ascii table\n";
        else if (i < 32 || i > 126)
            std::cout << "Non displayable\n";
        else
            std::cout << static_cast<char>(i) << std::endl;

        if (i > INT_MAX || i < INT_MIN)
            std::cout << "int: Overflow (Max / Min Int)" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(i) << std::endl;
        std::cout << "float: " << static_cast<float>(i) << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else if(isChar(str) == true)
    {
        std::cout << "char: ";
        if(static_cast<int>(str[1]) < 32 || static_cast<int>(str[1]) > 126)
            std::cout << "Non displayable\n";
        else
            std::cout << static_cast<char>(str[1]) << std::endl;
        std::cout << "int: " << static_cast<int>(str[1]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[1]) << std::endl;
        std::cout << "double: " << static_cast<double>(str[1]) << std::endl;
    }
    else if(isFloat(str) == true)
    {
        double i = std::stod(str);

        std::cout << "char: ";
        if(i > 255 || i < 0)
            std::cout << "Overflow of ascii table\n";
        else if (i < 32 || i > 126)
            std::cout << "Non displayable\n";
        else
            std::cout << static_cast<char>(i) << std::endl;

        if (i > INT_MAX || i < INT_MIN)
            std::cout << "int: Overflow (Max / Min Int)" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(i) << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else if(isDouble(str) == true)
    {
        double i = std::stod(str);

        std::cout << "char: ";
        if(i > 255 || i < 0)
            std::cout << "Overflow of ascii table\n";
        else if (i < 32 || i > 126)
            std::cout << "Non displayable\n";
        else
            std::cout << static_cast<char>(i) << std::endl;

        if (i > INT_MAX || i < INT_MIN)
            std::cout << "int: Overflow (Max / Min Int)" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(i) << std::endl;
        std::cout << "float: " << static_cast<float>(i) << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else if(isOthers(str) == 1)
    {
        double i = std::stod(str);

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else if(isOthers(str) == 2)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str + "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else if(isOthers(str) == 0)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: imposssible" << std::endl;
        std::cout << "double: impossible" << std::endl;    
    }
}

int main(int argc, char **av)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./ex00 <thing to convert>" << std::endl;
        return 0;
    }
    std::string str(av[1]);
    if(str.empty())
    {
        std::cerr << "The thing you want convert don't exist!" << std::endl;
        return 0;
    }
    convertion(str);
}