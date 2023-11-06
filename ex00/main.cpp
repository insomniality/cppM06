#include "ScalarConverter.hpp"
#include <string>


int main(int argc, char** argv)
{
	try
	{
		(void)argc;
		(void)argv;
		// if ()
		// {
		// 	/* code */
		// }

		// char a = ScalarConverter::convert_char(static_cast<std::string>(argv[1]));
		// int b = ScalarConverter::convert_int("123");
		// float c = ScalarConverter::convert_char("123");
		// double d = ScalarConverter::convert_char("123");

		// printf("%i\n", stoi(static_cast<std::string>(argv[1]), nullptr));
		std::cout << "char: " << ScalarConverter::convert_char(static_cast<std::string>(argv[1])) << std::endl;
		std::cout << "int: " << ScalarConverter::convert_int(static_cast<std::string>(argv[1])) << std::endl;
		std::cout << "float: " << ScalarConverter::convert_float(static_cast<std::string>(argv[1])) << std::endl;
		std::cout << "double: " << ScalarConverter::convert_double(static_cast<std::string>(argv[1])) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
