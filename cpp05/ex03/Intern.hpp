#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form *makeForm(std::string nameform, std::string target);

		// Error handling
		class Exception
			: public std::exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Intern don't find the form !";
				}
		};
		
	private:

};

#endif /* ********************************************************** INTERN_H */