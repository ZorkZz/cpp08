#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int> vector;

	vector.push_back(8);
	vector.push_back(7);
	vector.push_back(85);
	vector.push_back(2);
	try
	{
		easyfind(vector, 85);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(vector, 90);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}