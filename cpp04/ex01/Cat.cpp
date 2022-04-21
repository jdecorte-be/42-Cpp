#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
}

Cat::~Cat()
{
    delete brain;
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
