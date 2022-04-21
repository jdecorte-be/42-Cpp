#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const std::string name);
        ~Animal();
        Animal &operator=(const Animal &ani);
        Animal(const Animal &ani);
        virtual void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;

};

#endif