#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
	: name("Default"), sign(false), gradesign(150), gradeexec(150)
{
}

Form::Form(std::string name, int gradesign, int gradeexec)
	: name(name), sign(false), gradesign(gradesign), gradeexec(gradeexec)
{
}

Form::Form(std::string name, std::string target, int gradesign, int gradeexec)
	: name(name), sign(false), target(target), gradesign(gradesign), gradeexec(gradeexec)
{
}

Form::Form( const Form & src )
	:name(src.name), sign(src.sign), gradesign(src.gradesign), gradeexec(src.gradeexec)
{
}




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		sign = rhs.sign;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::signForm()
{
	
}


void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > gradesign)
		throw GradeTooLowException();
	sign = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */