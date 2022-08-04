#include "conv.hpp"

bool isInt(std::string &str)
{
    if(((str[0] == '+' || str[0] == '-') && str.length() <= 1)
            || (!isdigit(str[0]) && str[0] != '-' && str[0] != '+'))
        return false;

    for(size_t i = 1; i < str.length(); i++)
    {
        if(!isdigit(str[i]))
            return false;
    }
    return true;
}

bool isChar(std::string &str)
{
    if(str[0] == '\'' && str[2] == '\'' && str.length() == 3)
        return true;

    return false;
}

bool isFloat(std::string &str)
{
    if(((str[0] == '+' || str[0] == '-') && str.length() <= 1)
        || (!isdigit(str[0]) && str[0] != '-' && str[0] != '+'))
    return false;

    bool pointcount = false;

    for(size_t i = 1; i < str.length(); i++)
    {
        if(!isdigit(str[i]))
        {
            if(str.length() - 1 == i)
            {
                if(str[i] == 'f')
                    return true;
                return false;
            }
            if(str[i] == '.')
            {
                if(pointcount)
                    return false;
                pointcount = true;
            }
            else
                return false;
        }
    }
    return false;
}
bool isDouble(std::string &str)
{
    if(((str[0] == '+' || str[0] == '-') && str.length() <= 1)
        || (!isdigit(str[0]) && str[0] != '-' && str[0] != '+'))
    return false;

    bool pointcount = false;

    for(size_t i = 1; i < str.length(); i++)
    {
        if(!isdigit(str[i]))
        {
            if(str[i] == '.')
            {
                if(pointcount)
                    return false;
                pointcount = true;
            }
            else
                return false;
        }
    }
    return true;
}

int isOthers(std::string &str)
{
    if(str == "nanf" || str == "-inff" || str == "+inff")
        return 1; // Is float
    if(str == "nan" || str == "-inf" || str == "+inf")
        return 2; // Is double
    return 0; // Is unknown 
}
