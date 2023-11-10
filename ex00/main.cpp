#include "ScalarConverter.hpp"
#include <string>

///TODO: minus tver@
///TODO: 1234ksfv esi
///TODO: ete verjum ket ka chka et miat knaes

void check_char(std::string literal)
{
	// f;-;(+);.;
	unsigned long i = 0;

	std::cout << "char: ";
	if (literal.length() > 1)
	{
		while (i < literal.length())
		{
			if (!(literal[i] >= '0' && literal[i] <= '9'))
			{
				std::cout << "int: Impossible" << std::endl;
				std::cout << "char: Impossible" << std::endl;
				std::cout << "float: Impossible" << std::endl;
				std::cout << "double: Impossible" << std::endl;
				return ;
			}
			i++;
		}
	}
	std::cout << ScalarConverter::convert_char(literal) << std::endl;
}

int main(int argc, char** argv)
{
	try
	{
		(void)argc;
		// (void)argv;
		if (argc != 2)
			throw (ScalarConverter::Error());

		// char a = ScalarConverter::convert_char(static_cast<std::string>(argv[1]));
		// int b = ScalarConverter::convert_int("123");
		// float c = ScalarConverter::convert_char("123");
		// double d = ScalarConverter::convert_char("123");

		// printf("%i\n", stoi(static_cast<std::string>(argv[1]), nullptr));

		unsigned long i = 0;
		while (i < static_cast<std::string>(argv[1]).length())
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
			{
				std::cout << "int: Impossible" << std::endl;
				std::cout << "char: Impossible" << std::endl;
				std::cout << "float: Impossible" << std::endl;
				std::cout << "double: Impossible" << std::endl;
				return (0);
			}
			i++;
		}
		// if (i == static_cast<std::string>(argv[1]).length());

		std::cout << "char: " << ScalarConverter::convert_char(static_cast<std::string>(argv[1])) << std::endl;
		std::cout << "int: " << ScalarConverter::convert_int(static_cast<std::string>(argv[1])) << std::endl;
		std::cout << "float: " << ScalarConverter::convert_float(static_cast<std::string>(argv[1]));
		if (static_cast<std::string>(argv[1]).find_first_of('.', 0) == std::string::npos)
			std::cout << ".0";
		std::cout << 'f' << std::endl;
		std::cout << "double: " << ScalarConverter::convert_double(static_cast<std::string>(argv[1]));
		if (static_cast<std::string>(argv[1]).find_first_of('.', 0) == std::string::npos)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
