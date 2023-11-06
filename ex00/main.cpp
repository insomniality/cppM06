#include "ScalarConverter.hpp"
#include <string>


int main(int argc, char** argv)
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
	printf("%f\n", ScalarConverter::convert_float(static_cast<std::string>(argv[1])));
}
