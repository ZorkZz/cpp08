#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void	easyfind(T type, int nb)
{
	typename T::iterator	iter;

	iter = std::find(type.begin(), type.end(), nb);
	if (iter != type.end())
	{
		std::cout << "Element: " << nb << " is on index " << iter - type.begin() << std::endl;
	}
	else
		throw std::runtime_error("404 not found");
}


#endif