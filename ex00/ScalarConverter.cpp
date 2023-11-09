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

const char* ScalarConverter::NoInput::what() const throw()
{
	return ("No Input");
};

char ScalarConverter::convert_char(std::string literal)
{
	if (literal.length() == 1 && (literal[0] > 31 && literal[0] < 127))
		return(literal[0]);
	else if (literal.length() < 4 && (literal[0] >= '0' || literal[0] <= '9'))
	{
		if (literal.length() == 1)
			if (static_cast<char>(myStoi(literal)) > 31 && static_cast<char>(myStoi(literal)) < 127)
				return (static_cast<char>(myStoi(literal)));
		if (literal.length() == 2 && (literal[1] >= '0' || literal[1] <= '9'))
			if (static_cast<char>(myStoi(literal)) > 31 && static_cast<char>(myStoi(literal)) < 127)
				return (static_cast<char>(myStoi(literal)));		
		if (literal.length() == 3	&& (literal[1] >= '0' || literal[1] <= '9') \
									&& (literal[2] >= '0' || literal[2] <= '9'))
			if (static_cast<char>(myStoi(literal)) > 31 && static_cast<char>(myStoi(literal)) < 127)
				return (static_cast<char>(myStoi(literal)));
	}
	// throw (WrongConvertion());
	std::cout << "Impossible";
	return('\0');
	// if (static_cast<double>(literal[0]) > 31 && static_cast<double>(literal[0]) < 127)
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
	// 	throw (WrongConvertion());
	int li;
	if (literal.find_first_of('.', 0) == std::string::npos)
		li = literal.find_first_of('.', 0);
	else
		li = literal.length() - 1;

	float l =	myStoi(literal.substr(0, li));						// first half
	float r =	myStoi(literal.substr(li + 1, literal.length() - 1))	\
				/ pow(10, literal.length() - li - 1);				// second half
	// std::cout << l;
	// std::cout << '.';
	// std::cout << r << 'f' << std::endl;
	return(l + r);
}

double ScalarConverter::convert_double(std::string literal)
{
	int li;
	if (literal.find_first_of('.', 0) == std::string::npos)
		li = literal.find_first_of('.', 0);
	else
		li = literal.length() - 1;

	double l =	myStoi(literal.substr(0, li));						// first half
	double r =	myStoi(literal.substr(li + 1, literal.length() - 1))	\
				/ pow(10, literal.length() - li - 1);				// second half
	// std::cout << l;
	// std::cout << '.';
	// std::cout << r << std::endl;
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
