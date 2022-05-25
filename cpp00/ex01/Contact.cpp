#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

// * All Setters =================================================
void Contact::setIndex(const int &index)
{
    index = index;
}

void Contact::setFirstname(const std::string &firstname)
{
    firstname = firstname;
}

void Contact::setLastname(const std::string &lastname)
{
    lastname = lastname;
}

void Contact::setPhonenumber(const std::string &phonenumber)
{
    phonenumber = phonenumber;
}

void Contact::setNickname(const std::string &nickname)
{
    nickname = nickname;
}

void Contact::setSecret(const std::string &secret)
{
    secret = secret;
}

// * All Getters ============================
const int &Contact::getIndex()
{
    return index;
}

const std::string &Contact::getFirstname()
{
    return firstname;
}

const std::string &Contact::getPhonenumber()
{
    return phonenumber;
}

const std::string &Contact::getLastname()
{
    return lastname;
}

const std::string &Contact::getNickname()
{
    return nickname;
}

const std::string &Contact::getSecret()
{
    return secret;
}

// * Function

std::string limit10char(std::string str)
{
    std::string spaces(10, ' ');
    int len = str.size();

    if(len > 10)
        return str.substr(0, 9) + ".";
    else
        return spaces.substr(0, 10 - len) + str;
    return NULL;
}


std::string askinfo(std::string str)
{
    std::string info;
    std::cout << str << std::endl;
    while(1)
    {
        getline(std::cin, info);
        if(std::cin.eof())
            exit(0);
        if(!info.empty())
            break;
        std::cout << "Please enter a argument" << std::endl;
    }
    return info;
}

// * Class Function ===========

void Contact::add_info(int index)
{
    index = index;
    firstname = askinfo("Enter first name");
    phonenumber = askinfo("Enter last name");
    lastname = askinfo("Enter nickname");
    nickname = askinfo("Phone number");
    secret = askinfo("Darkest secret");
}

void Contact::show_contact()
{
    if(firstname.empty())
    {
        std::cout << "This contact dont exist" << std::endl;
        return ;
    }
    std::cout << "Firstname : " << firstname << std::endl << "Lastname : " << lastname << std::endl << "Phonenumber : " << phonenumber << std::endl << "Nickname : " << nickname << std::endl << "Secret : " << secret << std::endl;
}

