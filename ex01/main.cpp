#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	{
		Span sp(10);
		std::vector<int>	list;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		list.push_back(5);
		list.push_back(8);
		list.push_back(18);
		list.push_back(23);
		list.push_back(24);

		sp.addNumbresList(list);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		srand(time(NULL));
		Span	sp(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			sp.addNumber(std::rand());
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		try
		{
			srand(time(NULL));
			Span	sp(800);
			for (size_t i = 0; i < 10000; i++)
			{
				sp.addNumber(std::rand());
			}
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return 0;
}