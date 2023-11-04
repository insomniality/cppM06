#include "ScalarConverter.hpp"
#include <string>

char ScalarConverter::convert_char(std::string literal)
{

	// try
	// {
		if (static_cast<double>(literal[0]) > 31)
			return(literal[0]);	
		return('\0');	
		// throw ();
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}

int convert_int(std::string literal)
{
	try
	{
		return(stoi(literal));
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(-1);
}

float convert_float(std::string literal)
{
	return( static_cast<float>(stoi(literal)) );
}

double convert_double(std::string literal)
{
	return(static_cast<double>(stoi(literal)));
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
