#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat called\n";
}

Cat::Cat( const Cat & src )
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	brain = new Brain(*(src.getBrain()));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor for Cat called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
		this->brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
    std::cout << "The " << type << " meows" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void Cat::getIdea(int index)
{
	std::cout << this->brain->ideas[index] << std::endl;
}

/* ************************************************************************** */