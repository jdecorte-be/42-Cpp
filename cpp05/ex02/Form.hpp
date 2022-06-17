#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		Form(std::string name, int gradesign, int gradeexec);
		Form(std::string name, std::string target, int gradesign, int gradeexec);
		Form( Form const & src );
		~Form();
		void beSigned(Bureaucrat &bureaucrat);
		void signForm();
		Form &		operator=( Form const & rhs );
		const std::string target;

	private:
		const std::string name;
		bool sign;
		const int gradesign;
		const int gradeexec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */