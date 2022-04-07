#include "../inc/Contact.hpp"

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
    this->index = index;
}

void Contact::setFirstname(const std::string &firstname)
{
    this->firstname = firstname;
}

void Contact::setLastname(const std::string &lastname)
{
    this->lastname = lastname;
}

void Contact::setPhonenumber(const std::string &phonenumber)
{
    this->phonenumber = phonenumber;
}

void Contact::setNickname(const std::string &nickname)
{
    this->nickname = nickname;
}

void Contact::setSecret(const std::string &secret)
{
    this->secret = secret;
}

// * All Getters ============================
const int &Contact::getIndex()
{
    return this->index;
}

const std::string &Contact::getFirstname()
{
    return this->firstname;
}

const std::string &Contact::getPhonenumber()
{
    return this->phonenumber;
}

const std::string &Contact::getLastname()
{
    return this->lastname;
}

const std::string &Contact::getNickname()
{
    return this->nickname;
}

const std::string &Contact::getSecret()
{
    return this->secret;
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
        if(!info.empty())
            break;
        std::cout << "Please enter a argument" << std::endl;
    }
    return info;
}

// * Class Function ===========

void Contact::add_info(int index)
{
    this->index = index;
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

