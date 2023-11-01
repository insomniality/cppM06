#include "ScalarConverter.hpp"

char ScalarConverter::convert(std::string literal)
{
	char a = 'z';
	// // (void) literal;
	return(&a);
}

/////////////

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	(void) obj;

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}
