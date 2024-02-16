#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <exception>
#include <algorithm>

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(unsigned int _size);
		Span(const Span &span);
		Span	&operator=(const Span &span);
		void	addNumber(int number);
		void	addNumbresList(std::vector<int> list);
		int		shortestSpan();
		int		longestSpan();
		class arrayFull: public std::exception
		{public: virtual const char	*what() const throw();};

	private:
		unsigned int		_size;
		std::vector<int>	_numbers;
};

#endif