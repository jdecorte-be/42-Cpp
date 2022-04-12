#include "Harl.hpp"

int main()
{
    Harl karen = Harl();
	void	(Harl::*test_ptr)( std::string str );

	karen.complain("debug");
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	test_ptr = &Harl::complain;
	(karen.*test_ptr)("DEBUG");
	(karen.*test_ptr)("what");
}