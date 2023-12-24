#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &stack)
{
	if (this != &stack)
		*this = stack;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &stack)
{
	this->c = stack->c;
	return (*this);
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::const_begin()
{
	return (this->c.cbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::const_end()
{
	return (this->c.cend());
}

