#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain &operator=(const Brain &brain);
        Brain(const Brain &brain);
    private:
        std::string ideas[100];
};

#endif