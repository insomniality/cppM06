#include "ScalarConverter.hpp"
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
	// try
	// {
		if (static_cast<double>(literal[0]) > 31)
			return(literal[0]);	
		throw (WrongConvertion());
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}

int ScalarConverter::convert_int(std::string literal)
{
	// try
	// {
		return(stoi(literal, nullptr));
		throw (WrongConvertion());
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// return(-1);
}

float ScalarConverter::convert_float(std::string literal)
{
	if (literal.find_first_of('.', 0) == std::string::npos)
		throw (WrongConvertion());

	float l = stoi(literal.substr(0, literal.find_first_of('.', 0)), nullptr); // first half
	float r =	stoi(literal.substr(literal.find_first_of('.', 0) + 1, literal.length() - 1), nullptr) \
				/ pow(10, literal.length() - literal.find_first_of('.', 0) - 1); // second half
	return(l + r);
}

double ScalarConverter::convert_double(std::string literal)
{
	if (literal.find_first_of('.', 0) == std::string::npos)
		throw (WrongConvertion());

	double l = stoi(literal.substr(0, literal.find_first_of('.', 0)), nullptr); // first half
	double r =	stoi(literal.substr(literal.find_first_of('.', 0) + 1, literal.length() - 1), nullptr) \
				/ pow(10, literal.length() - literal.find_first_of('.', 0) - 1); // second half
	return(l + r);
	// return(static_cast<double>(stoi(literal, nullptr)));
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
