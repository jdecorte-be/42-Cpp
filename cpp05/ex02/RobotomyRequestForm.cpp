#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm" ,72, 45), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm" ,72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: target(src.target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		this->target = rhs.target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() >  getGradeExec())
		throw GradeTooLowException();
	else if (getSigned() == false)
		throw NotSignedException();// to add

	std::cout << "Bruuuuhhh Bruuuuhhh" << std::endl;
	if(rand () % 2)
		std::cout << target << "has been robotized" << std::endl;
	else
		std::cout << "Operation failed" << std::endl;
	
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */