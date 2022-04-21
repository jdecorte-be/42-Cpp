#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat
    : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &cat);
        Cat(const Cat &cat);
        void makeSound() const;

};

#endif