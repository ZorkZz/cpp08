#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &stack);
		~MutantStack();
		MutantStack	&operator=(MutantStack<T> const &stack);
		typedef typename	std::stack<T>::container_type::iterator			iterator;
		typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;
		typename std::stack<T>::container_type::iterator	begin();
		typename std::stack<T>::container_type::iterator	end();
		typename std::stack<T>::container_type::const_iterator	const_begin();
		typename std::stack<T>::container_type::const_iterator	const_end();
};

#include "MutantStack.tpp"
#endif