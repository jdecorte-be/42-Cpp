#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog
    : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog &operator=(const Dog &dog);
        Dog(const Dog &dog);
        void makeSound();
         void makeSound() const;
    

};

#endif