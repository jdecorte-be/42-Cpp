#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::srand(std::time(0)); // common practice to seed the pseudo-random number generator

	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Bureaucrat				bob("Bob", 1);
	Bureaucrat				bill("Bill", 142);
	ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		robo("robo");
	PresidentialPardonForm	president("president");
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	// Executing
	// ShrubberyCreationForm : sign 145, exec 137
	// RobotomyRequestForm sign 72, exec 45
	// PresidentialPardonForm sign 25, exec 5

	std::cout << "SHRUBBERY CREATION FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm(shrub);
	bob.signForm(shrub);


	std::cout << std::endl << "[SIGNED]" << std::endl;
	bob.executeForm(shrub);
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm(shrub);
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "ROBOTOMY REQUEST FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm(robo);
	bob.signForm(robo);


	std::cout << std::endl << "[SIGNED (50% failure chance)]" << std::endl;
	bob.executeForm(robo);
	bob.executeForm(robo);
	bob.executeForm(robo);
	bob.executeForm(robo);
	bob.executeForm(robo);
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm(robo);
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "PRESIDENTIAL PARDON FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm(president);
	bob.signForm(president);


	std::cout << std::endl << "[SIGNED]" << std::endl;
	bob.executeForm(president);
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm(president);
	std::cout << std::endl << std::endl;

	//-------------------------------------------------------	
}