#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl;

typedef struct s_harl
{
    std::string lvl;
    void    (Harl::*func)();
}   t_harl;

class Harl
{
    private:
        t_harl harl[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif