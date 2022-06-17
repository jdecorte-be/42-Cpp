#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>

#include "Form.hpp"

class RobotomyRequestForm
	: public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string &traget);

		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void execute(Bureaucrat const & executor) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */