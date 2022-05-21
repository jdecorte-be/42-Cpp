#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed&);

        ~Fixed();

        Fixed &operator=(const Fixed&);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat() const;
        float toInt() const;

    private:
        float value;
        static const int bit;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif