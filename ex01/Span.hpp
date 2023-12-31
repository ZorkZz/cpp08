#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <exception>

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(unsigned int _size);
		Span(Span &span);
		Span	&operator=(Span const &span);
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();
		class arrayFull: public std::exception
		{public: virtual const char	*what() const throw();};

	private:
		unsigned int		_size;
		std::vector<int>	_numbers;
};

#endif