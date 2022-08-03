#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
	: name("Default"), grade(150)
{
	// std::cout << "Default Constructor \n";
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
	std::cout << "Bureaucrat with " << grade << " as beed constructed\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
	: name(src.name + "_cpy")
{
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
		grade = rhs.grade;
	return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << "Bureaucrat " << rhs.getName() << " has a grade of " << rhs.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::increase_grade(int n)
{
	if(grade - n < 1)
		throw GradeTooHighException();
	grade -= n;
	std::cout << "Increase grade by " << n << std::endl;
}

void Bureaucrat::decrease_grade(int n)
{
	if(grade + n > 150)
		throw GradeTooLowException();
	grade += n;
	std::cout << "Decrease grade by " << n << std::endl;
}

void Bureaucrat::signForm(Form &ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << "Bureaucrat " << name << " with a grade of " << grade << " have succesfully signs " << ref.getName() << std::endl;
	}
	catch (Form::Exception &e)
	{
		std::cout << "Bureaucrat " << name << " with a grade of " << grade << " can't signs " << ref.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << name << " with a grade of " << grade << " have succesfully executed " << form.getName() << std::endl;
	}
	catch (Form::Exception &e)
	{
		std::cout << "Bureaucrat " << name << " with a grade of " << grade << " can't executed " << form.getName() << " because " << e.what() << std::endl;
	}
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

void Bureaucrat::setGrade(int value)
{
	grade = value;
}

/* ************************************************************************** */