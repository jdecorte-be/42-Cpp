#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	public:

		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		size_t				shortestSpan( void );
		size_t				longestSpan( void );
		void addNumber(int n );
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

	private:
		std::vector<int> vec;
		size_t _size;

};

#endif /* ************************************************************ SPAN_H */