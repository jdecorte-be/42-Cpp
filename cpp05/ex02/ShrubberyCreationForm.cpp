#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm" ,145, 137), target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm" ,145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
	: target(src.target)
{
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
	if ( this != &rhs )
	{
		this->target = rhs.target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() >  getGradeExec())
		throw GradeTooLowException();
	else if (getSigned() == false)
		throw NotSignedException();// to add

	std::ofstream fd(target + "_shrubbery");
	if(!fd.is_open())
		throw FileNotOpenException();
	fd <<
		"     ccee88oo          \n"
		"  C8O8O8Q8PoOb o8oo    \n"
		" dOB69QO8PdUOpugoO9bD  \n"
		"CgggbU8OU qOp qOdoUOdcb\n"
		"   6OuU  /p u gcoUodpP \n"
		"      \\\\//  /douUP   \n"
		"        \\\\////       \n"
		"         |||/\\        \n"
		"         |||\\/        \n"
		"         |||||         \n"
		"  .....\\//||||\\....  \n";
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */