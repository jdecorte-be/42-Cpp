#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::add_contact()
{
    if(index == 8)
        contacts[7].add_info(index);
    else
    {
        contacts[index].add_info(index);
        index++;
    }
}

void PhoneBook::search_contact(int index)
{
    if(index < 0 || index > 7)
    {
        std::cout << "Invalid Index" << std::endl;
        return ;
    }
    contacts[index].show_contact();
}

void PhoneBook::show_all()
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for(int i = 0; i < index; i++)
        std::cout << limit10char(std::to_string(i)) << "|" << limit10char(contacts[i].getFirstname()) << "|" << limit10char(contacts[i].getLastname()) << "|" << limit10char(contacts[i].getNickname()) << std::endl; 
}