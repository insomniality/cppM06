#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	public:
		static char convert_char(std::string literal);
		static int convert_int(std::string literal);
		static float convert_float(std::string literal);
		static double convert_double(std::string literal);

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
};

#endif