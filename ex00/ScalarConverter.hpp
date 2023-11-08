#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

int myStoi(std::string str);


class ScalarConverter
{
	public:
		// static void convert(std::string literal);
		static char convert_char(std::string literal);
		static int convert_int(std::string literal);
		static float convert_float(std::string literal);
		static double convert_double(std::string literal);
	public:
		class WrongConvertion : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NoInput : public std::exception
		{
			public:
				const char* what() const throw();
		};
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
};

#endif