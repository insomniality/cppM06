#include "ScalarConverter.hpp"
#include <cmath>

// #ifndef TOOLS_CPP
// # define TOOLS_CPP
// #define sT symbolTranslator()

// //111

void ScalarConverter::check_arg(const std::string& str)
{
	if (str.size() == 1)
		return ;

	size_t start = (str[0] == '+' || str[0] == '-' ? 1 : 0);
	size_t end = (str[str.size() - 1] == 'f' ? str.size() - 2 : str.size());

	std::cout << start << " , " << end << "\n";

	if (str.find('.') != str.rfind('.'))
		throw InvalidValue();

	for (; start < end; ++start)
	{
		if (str[start] != '.' && (str[start] < '0' || str[start] > '9'))
			throw InvalidValue();
	}
}

int ScalarConverter::myStoi(std::string str)
{
	return(atoi(str.c_str()));
}

// static int symbolTranslator(char symb)
// {
// 	if (symb >= '0' && symb <= '9')
// 		return (symb - '0');
// 	else if (symb >= 'a')
// 		return (symb - 'a' + 10);
// 	else // upperCase
// 		return (symb - 'A' + 10);
// }

// int baseConvertor(std::string str, std::string base)
// {
// 	int	b = base.lenght();
// 	int	rtr = 0;
// }

// #endif