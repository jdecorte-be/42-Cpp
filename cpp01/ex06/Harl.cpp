#include "Harl.hpp"

Harl::Harl()
{
    harl[0].lvl = "DEBUG";
    harl[0].func = &Harl::debug;
    harl[1].lvl = "INFO";
    harl[1].func = &Harl::info;
    harl[2].lvl = "WARNING";
    harl[2].func = &Harl::warning;
    harl[3].lvl = "ERROR";
    harl[3].func = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for(int i = 0; i < 4; i++)
    {
        if(msg[i] == level)
        {
            index = i;
            break;
        }
    }
    switch (index)
	{
		case (0):
            (this->*harl[0].func)();

		case (1):
            (this->*harl[1].func)();

		case (2):
            (this->*harl[2].func)();

		case (3):
            (this->*harl[3].func)();
            break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
	}
}
