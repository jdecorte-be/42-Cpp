#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		void increase_grade();
		void decrease_grade();

		class GradeTooHighException 
			: public std::exception
		{
			virtual const char *what() const throw();
		};
		
		class GradeTooLowException 
			: public std::exception
		{
			virtual const char *what() const throw();
		};

	private:
		std::string name;
		int	grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */