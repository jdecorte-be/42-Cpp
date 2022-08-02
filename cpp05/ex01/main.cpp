#include "Bureaucrat.hpp"

int	main(void)
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	bill("Bill", 132);

	Bureaucrat & bob_ref = bob;
	Bureaucrat & bill_ref = bill;

	Form		a("A13", 4, 6);
	Form		b("B97", 146, 135);

	// Create a Form with grades too low
	try
	{
		Form	c("C46", 489, 1435);
	}
	catch (Form::Exception &e)
	{
		std::cout << "Constructor failure: " << e.what() << std::endl; //the grade is too low
	}

	// Create a grade with grades too high
	try
	{
		Form	c("D143", -583, -800);
	}
	catch (Form::Exception &e)
	{
		std::cout << "Constructor failure: " << e.what() << std::endl; //the grade is too high
	}
	std::cout << std::endl << std::endl;

	// Sign forms
	std::cout << std::endl;
	std::cout << "SIGN FORMS:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// Sign OK
	std::cout << "SIGN OK:" << std::endl;
	bob_ref.signForm(a);
	std::cout << a << " just showed its current status" << std::endl;
	a.setSigned(false);
	std::cout << std::endl << std::endl;

	// Sign KO
	std::cout << "SIGN KO:" << std::endl;
	bill_ref.signForm(a);
	std::cout << a << " just showed its current status" << std::endl;
	std::cout << std::endl << std::endl;

	// Sign OK
	std::cout << "SIGN OK:" << std::endl;
	bob.signForm(b);
	std::cout << b << " just showed its current status" << std::endl;
	b.setSigned(false);
	std::cout << std::endl << std::endl;
	
	// Sign OK
	std::cout << "SIGN OK:" << std::endl;
	bill.signForm(b);
	std::cout << b << " just showed its current status" << std::endl;
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------	
}