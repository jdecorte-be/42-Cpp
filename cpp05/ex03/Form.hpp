#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form();
		Form(std::string name, int gradesign, int gradeexec);
		Form( Form const & src );

		Form &		operator=( Form const & rhs );

		virtual ~Form() = 0;

		void beSigned(Bureaucrat &bureaucrat);
		void signForm();
		virtual void execute(Bureaucrat const & executor) const = 0;

		const std::string &getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSigned() const;
		void setSigned(bool sign);

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
			: public Form::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Grade too high ( < 1 )";
				}
		};
		
		class GradeTooLowException
			: public Form::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "Grade too low ( > 150 )";
				}
		};

		class NotSignedException
			: public Form::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "The Form is not signed";
				}
		};

		class FileNotOpenException
			: public Form::Exception
		{
			public : 
				virtual const char *what() const throw()
				{
					return "The File is not open";
				}
		};

	private:
		const std::string name;
		bool sign;
		const int gradesign;
		const int gradeexec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */