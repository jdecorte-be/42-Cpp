#include "PhoneBook.hpp"

bool isNumber(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
	{
        if (std::isdigit(str[i]) == 0)
			return false;
    }
    return true;
}

int main()
{
	PhoneBook phonebook;
	std::string input;
	std::string index;
	while(19)
	{
		std::getline(std::cin, input);
		if(std::cin.eof())
			return 0;
		if(input == "ADD")
			phonebook.add_contact();
		else if (input == "EXIT")
			return 0;
		else if (input == "SEARCH")
		{
			phonebook.show_all();
			std::cout << "Type the index of contact " << std::endl;
			std::getline(std::cin, index);
			if(std::cin.eof())
				return 0;
			if(index.empty())
				std::cout << "Type a valid index " << std::endl;
			else if(isNumber(index))
				phonebook.search_contact(std::stoi(index));
			else
				std::cout << "Type a valid index " << std::endl;
		}
		else if (!input.empty())
			std::cout << "Invalid Command" << std::endl;
	}
}