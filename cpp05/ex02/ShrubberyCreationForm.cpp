#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
	: Form("ShrubberyCreationForm", target ,145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	// if ( this != &rhs )
	// {
	// 	this->_value = rhs.getValue();
	// }
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream fd;
	fd.open(target + "_shrubbery", std::fstream::out | std::fstream::trunc);
	fd <<
	"         v\n"
    "        >X<\n"
    "         A\n"
    "        d$b\n"
    "      .d\$$b.\n"
    "    .d$i$$\$$b.\n"
	"       d$$@b\n"
	"      d\$$$ib\n"
	"    .d$$$\$$$b\n"
	"  .d$$@$$$$\$$ib.\n"
	"      d$$i$$b\n"
	"     d\$$$$@$b\n"
	"  .d$@$$\$$$$$@b.\n"
	".d$$$$i$$$\$$$$$$b.\n";
	"        ###\n"
	"        ###\n"
	"        ###\n";
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */