#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain;
}

Dog::~Dog()
{
    delete brain;
}

Dog &Dog::operator=(const Dog &dog)
{

}

Dog::Dog(const Dog &dog)
{

}

void Dog::makeSound() const
{
    std::cout << "The " << type << " barks" << std::endl;
}