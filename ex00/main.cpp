#include "ScalarConverter.hpp"
#include <string>

///TODO: minus tver@
///TODO: 1234ksfv esi
///TODO: ete verjum ket ka chka et miat knaes

// void check_char(std::string literal)
// {
// 	// f;-;(+);.;
// 	unsigned long i = 0;

// 	// std::cout << "char: ";
// 	if (literal.length() > 1)
// 	{
// 		while (i < literal.length())
// 		{
// 			if (!(literal[i] >= '0' && literal[i] <= '9'))
// 			{
// 				std::cout << "Impossible" << std::endl;
// 				return ;
// 			}
// 			i++;
// 		}
// 	}
// 	std::cout << ScalarConverter::convert_char(literal);
// }

int main(int argc, char** argv)
{
	try
	{
		(void)argc;
		// (void)argv;
		if (argc != 2)
		{
			std::cout << "Wrong argc\n";
			return 0;
		}

		// char a = ScalarConverter::convert_char(static_cast<std::string>(argv[1]));
		// int b = ScalarConverter::convert_int("123");
		// float c = ScalarConverter::convert_char("123");
		// double d = ScalarConverter::convert_char("123");

		// printf("%i\n", stoi(static_cast<std::string>(argv[1]), nullptr));

		// unsigned long i = 0;
		// while (i < static_cast<std::string>(argv[1]).length())
		// {
		// 	if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		// 	{
		// 		std::cout << "int: Impossible" << std::endl;
		// 		std::cout << "char: Impossible" << std::endl;
		// 		std::cout << "float: Impossible" << std::endl;
		// 		std::cout << "double: Impossible" << std::endl;
		// 		return (0);
		// 	}
		// 	i++;
		// }
		// if (i == static_cast<std::string>(argv[1]).length());
		std::cout << "\n";

		ScalarConverter::convert(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
