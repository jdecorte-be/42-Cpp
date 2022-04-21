#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::~Cat()
{

}

Cat &Cat::operator=(const Cat &cat)
{

}

Cat::Cat(const Cat &cat)
{

}

void Cat::makeSound() const
{
    std::cout << "The " << type << " meows" << std::endl;
}
