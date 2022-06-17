#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
	: name("Default"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name)
{
	if(grade < 1)
		throw GradeTooHighException();
	if(grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
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

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const	char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const	char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

void Bureaucrat::increase_grade()
{
	if(grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrease_grade()
{
	if(grade >= 150)
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