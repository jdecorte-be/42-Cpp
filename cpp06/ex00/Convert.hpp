#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert
{

	public:

		Convert();
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Convert const & i );

#endif /* ********************************************************* CONVERT_H */