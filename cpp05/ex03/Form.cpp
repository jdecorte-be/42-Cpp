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
	if(gradesign > 150 || gradeexec > 150)
		throw GradeTooLowException();
	else if (gradesign < 1 || gradeexec < 1)
		throw GradeTooHighException();
	std::cout << "Form " << name << " having a gradesign of " << gradesign << " and a gradeexec of " << gradeexec
	<< " as beed constructed\n";
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
	sign = rhs.sign;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " having a gradesign of " << i.getGradeSign() << " and a gradeexec of " << i.getGradeExec()
		<< " with signed equal to " << i.getSigned();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > gradesign)
		throw GradeTooLowException();
	sign = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Form::getName() const
{
	return name;
}

int Form::getGradeSign() const
{
	return gradesign;
}
int Form::getGradeExec() const
{
	return gradeexec;
}
bool Form::getSigned() const
{
	return sign;
}

void Form::setSigned(bool sign)
{
	this->sign = sign;
}


/* ************************************************************************** */