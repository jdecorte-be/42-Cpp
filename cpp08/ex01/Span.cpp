#include "Span.hpp"
#include <vector>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n)
	: vec(0), _size(n)
{
}

Span::Span( const Span & src )
{
	vec = src.vec;
	_size = src._size;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		vec = rhs.vec;
		_size = rhs._size;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int n )
{
	if(vec.size() == _size)
		throw std::out_of_range("Out of range");
	vec.push_back(n);
	// std::cout << "Number added: " << n << std::endl;
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if(vec.size() + std::distance(start, end) > _size)
		throw std::out_of_range("Out of range");
	vec.assign(start, end);
	// std::cout << "Number added: " << n << std::endl;
}

size_t				Span::shortestSpan( void )
{
	if(vec.size() <= 1)
		throw std::logic_error("Out of range");
	std::sort(vec.begin(), vec.end());
	size_t result =  (size_t)vec[1] - (size_t)vec[0]; // longest
	for(size_t i = 0; i < vec.size(); i++)
	{
		// std::cout << result << std::endl;
		if((size_t)vec[i + 1] - (size_t)vec[i] < result)
			result = (size_t)vec[i + 1] - (size_t)vec[i];
	}
	return result;
}
size_t				Span::longestSpan( void )
{
	// std::cout << vec.size() << std::endl;
	if(vec.size() <= 1)
		throw std::logic_error("Not enough elements to span");
	std::sort(vec.begin(), vec.end());
	return (size_t)vec[vec.size() - 1] - (size_t)vec[0];
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */