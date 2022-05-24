#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
	: name("Default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{

}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	name = src.name;
	grade = src.grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		name = rhs.name;
		grade = rhs.grade;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

const	char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << "Grade too high exception" << std::endl;
}

const	char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "Grade too low exception" << std::endl;
}

void Bureaucrat::increase_grade(int n)
{
	if(grade - n < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrease_grade(int n)
{
	if(grade - n < 1)
		throw GradeTooLowException();
	grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

/* ************************************************************************** */