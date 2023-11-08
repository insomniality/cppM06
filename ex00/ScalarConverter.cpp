#include "ScalarConverter.hpp"
// #include "Tools.cpp"
#include <string>
#include <cmath>

// void ScalarConverter::convert(std::string literal)
// {
// 	if (literal.length() == 1)
// 	{

// 	}
// }

const char* ScalarConverter::WrongConvertion::what() const throw()
{
	return ("Wrong Type Convertion");
}

char ScalarConverter::convert_char(std::string literal)
{
	if (static_cast<double>(literal[0]) > 31)
		return(static_cast<char>(myStoi(literal)));	
	throw (WrongConvertion());
}

int ScalarConverter::convert_int(std::string literal)
{
	// if (literal.lenght() > 1)
	// {
	// 	if (literal[0] == '0')
	// 	{
	// 		if (literal[1] == 'b' || literal[1] == 'B')
	// 		{
	// 			// binary
	// 		}
	// 		else if (literal[1] == 'x' || literal[1] == 'X')
	// 		{
	// 			// hex
	// 		}
	// 		else
	// 		{
	// 			// octal
	// 		}
	// 	}
	// }
	return(myStoi(literal));
	// throw (WrongConvertion());
}

float ScalarConverter::convert_float(std::string literal)
{
	if (literal.find_first_of('.', 0) == std::string::npos)
		throw (WrongConvertion());

	float l = myStoi(literal.substr(0, literal.find_first_of('.', 0))); // first half
	float r =	myStoi(literal.substr(literal.find_first_of('.', 0) + 1, literal.length() - 1)) \
				/ pow(10, literal.length() - literal.find_first_of('.', 0) - 1); // second half
	return(l + r);
}

double ScalarConverter::convert_double(std::string literal)
{
	if (literal.find_first_of('.', 0) == std::string::npos)
		throw (WrongConvertion());

	double l = myStoi(literal.substr(0, literal.find_first_of('.', 0))); // first half
	double r =	myStoi(literal.substr(literal.find_first_of('.', 0) + 1, literal.length() - 1)) \
				/ pow(10, literal.length() - literal.find_first_of('.', 0) - 1); // second half
	return(l + r);
	// return(static_cast<double>(myStoi(literal)));
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
