#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

# define IS_NUMBER(n) (n >= '0' && n <= '9')

class ScalarConverter
{
	public:
		// static void convert(std::string literal);
		static void convert(const std::string &argv);
	private:
		static int myStoi(std::string str);
		static void check_arg(const std::string& str);

		static void convert_char(std::string literal);
		static int convert_int(std::string literal);
		static float convert_float(std::string literal);

		class WrongConvertion : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class InvalidValue : public std::exception
		{
			public:
				const char* what() const throw();
		};
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
};

#endif