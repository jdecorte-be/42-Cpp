#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <map>
#include <algorithm>
#include <exception>
#include <cctype>

template <class T>
typename T::iterator easyfind(T &elem, int n)
{
    typename T::iterator pos = std::find(elem.begin(), elem.end(), n);
    if(pos == elem.end())
    {
        std::cout << "Element " << n << " has not been found !" << std::endl;
        return elem.end();
    }
    return pos;
}

#endif // EASYFIND_HPP