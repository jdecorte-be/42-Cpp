#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>

#include "Form.hpp"
class ShrubberyCreationForm
	: public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string traget);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void execute(Bureaucrat const & executor) const;

	private:
		std::string target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */