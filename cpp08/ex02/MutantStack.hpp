#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <list>


template <class T>
class MutantStack
    : std::stack<T>
{
    MutantStack() : std::stack<T> {}
    virtual ~MutantStack();
    MutantStack(MutantStack &src) : std::stack<T>(src) {};

    MutantStack &		operator=( MutantStack const & rhs ) {std::stack<T>(rhs)}

    iterator begin() { return (std::stack<T>::c.begin()); }
    const_iterator begin() const { return (std::stack<T>::c.begin()); }
    iterator end() { return (std::stack<T>::c.end()); }
    const_iterator end() const { return (std::stack<T>::c.end()); }
    reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
    const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
    reverse_iterator rend() { return (std::stack<T>::c.rend()); }
    const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); } 
};

#endif