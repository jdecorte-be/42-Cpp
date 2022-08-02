#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

#include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );


		std::string getName() const;
		int getGrade() const;
		void setGrade(int value);

		void increase_grade(int n);
		void decrease_grade(int n);
		
		// to add
		void signForm(Form &ref);

		// Error handling
		class Exception
			: public std::exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Bureaucrat Exception";
				}
		};

		class GradeTooHighException
			: public Bureaucrat::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Grade too high ( < 1 )";
				}
		};
		
		class GradeTooLowException
			: public Bureaucrat::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Grade too low ( > 150 )";
				}
		};


	private:
		const std::string name;
		int	grade;

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);


#endif /* ****************************************************** BUREAUCRAT_H */