#include "Bureaucrat.hpp"

int	main(void)
{
	// Constructor with a bad grade
	// -49
	std::cout << std::endl;
	std::cout << "CONSTRUCTING WITH GRADE -49:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		Bureaucrat bill("Bill", -49);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// 256
	std::cout << std::endl;
	std::cout << "CONSTRUCTING WITH GRADE 256:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		Bureaucrat bill("Bill", 256);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Normal increment/decrement and "<<" overload
	std::cout << std::endl;
	std::cout << "IN/DECREMENT + \"<<\" overload:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat bob("Bob", 1);
	try
	{
		bob.decrease_grade(1);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	// "<<" operator overload used
	std::cout << bob << std::endl;
	try
	{
		bob.increase_grade(1);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	// "<<" operator overload used
	std::cout << bob;
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Increment 1 exception
	std::cout << std::endl;
	std::cout << "INCREMENT GRADE 1:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		bob.increase_grade(1);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Decrement 150 exception
	std::cout << std::endl;
	std::cout << "DECREMENT GRADE 150:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	bob.setGrade(150);
	try
	{
		bob.decrease_grade(1);
	}
	catch (Bureaucrat::Exception &e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;

	//-------------------------------------------------------
	return (0);
}