#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(const Bureaucrat& bureaucrat, Form& form) {
	std::cout << form;
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main() {
	Bureaucrat	burro("burro", 1);
	Bureaucrat	burretto("burretto", 42);
	std::cout << burro << burretto;

	try {
		{
			sectionTitle("shrubbery creation");
			ShrubberyCreationForm form("home");
			testForm(burro, form);
		}
		{
			sectionTitle("robotomy request");
			RobotomyRequestForm form("Bender");
			testForm(burro, form);
		}
		{
			sectionTitle("presidential pardon");
			PresidentialPardonForm form("lrocca");
			testForm(burro, form);
		}
		PresidentialPardonForm form("lrocca");
		{
			sectionTitle("execute unsigned form");
			std::cout << form;
			burro.executeForm(form);
		}
		{
			sectionTitle("too low to execute");
			burro.signForm(form);
			burretto.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}