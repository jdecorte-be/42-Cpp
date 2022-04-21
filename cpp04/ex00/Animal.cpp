#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
}

Animal::~Animal()
{

}

Animal &Animal::operator=(const Animal &ani)
{

}

Animal::Animal(const Animal &ani)
{
    *this = ani;
}

void Animal::makeSound() const
{
    std::cout << "Animals can make any kind of noise" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}