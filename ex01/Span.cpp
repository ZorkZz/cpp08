#include "Span.hpp"

Span::Span(void): _size(0)
{}

Span::~Span(void)
{
}

Span::Span(unsigned int size): _size(size)
{}

Span::Span(const Span &span)
{
	if (this != &span)
		*this = span;
}

Span	&Span::operator=(const Span &span)
{
	if (this != &span)
	{
		this->_numbers = span._numbers;
		this->_size = span._size;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (_numbers.size() == _size)
		throw (Span::arrayFull());
	_numbers.push_back(number);
}

int	Span::shortestSpan()
{
	int	span;

	if (_size < 2)
		return(0);
	span = std::abs(_numbers[0] - _numbers[1]);
	for (size_t i = 0; i < _size; i++)
	{
		for (size_t j = 0; j < _size; j++)
		{
			if (std::abs(_numbers[i] - _numbers[j]) < span && i != j)
				span = std::abs(_numbers[i] - _numbers[j]);
		}
	}
	return (span);
}

int	Span::longestSpan()
{
	int	span;

	if (_size < 2)
		return(0);
	span = std::abs(_numbers[1] - _numbers[0]);
	for (size_t i = 0; i < _size; i++)
	{
		for (size_t j = 0; j < _size; j++)
		{
			if (std::abs(_numbers[i] - _numbers[j]) > span && i != j)
				span = std::abs(_numbers[i] - _numbers[j]);
		}
	}
	return (span);
}

void	Span::addNumbresList(std::vector<int> list)
{
	if (_numbers.size() + list.size() > _size)
		throw (arrayFull());
	for(std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
		_numbers.push_back(*it);
}

char const	*Span::arrayFull::what() const throw(){return ("Span::exception: Array full");}
