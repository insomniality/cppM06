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

const char* ScalarConverter::Error::what() const throw()
{
	return ("Error");
};

char ScalarConverter::convert_char(std::string literal)
{
	#define SYMBOL(x) (literal[x] > 31 && literal[x] < 127)
	#define SYMBOL2 static_cast<char>(myStoi(literal)) > 31 && static_cast<char>(myStoi(literal)) < 127
	#define NUMBER(x) (literal[x] >= '0' && literal[x] <= '9')

	// if (literal.length() == 1 && SYMBOL(0) && !NUMBER(0)) //
	// 	return(literal[0]);
	// else if (literal.length() < 4 && NUMBER(0))
	// {
	// 	if (literal.length() == 1)
	// 		if (SYMBOL2)
	// 			return (static_cast<char>(myStoi(literal)));
	// 	if (literal.length() == 2 && NUMBER(1))
	// 		if (SYMBOL2)
	// 			return (static_cast<char>(myStoi(literal)));	
	// 	if (literal.length() == 3 && NUMBER(1) && NUMBER(2))
	// 		if (SYMBOL2)
	// 			return (static_cast<char>(myStoi(literal)));
	// }

	std::cout << "char: ";
	if (literal[0] == '-' || literal[0] == '+')
	{
		std::cout << literal[0];
		literal == literal.substr(1, std::string::npos);
	}
	
	int i = 0;
	if (NUMBER(i))
	{

		i++;
	}
	
	std::cout << "Impossible";
				// return (static_cast<char>(myStoi(literal)));

	// throw (WrongConvertion());
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

	if (literal.length() == 1)
		return (static_cast<int>(literal[0]));
	return(myStoi(literal));
	// throw (WrongConvertion());
}

float ScalarConverter::convert_float(std::string literal)
{
	int li;
	float l; // first half
	float r; // second half
	
	if (literal.find_first_of('.', 0) == std::string::npos)
	{
		li = literal.length();
		r = 0;
	}
	else
	{
		li = literal.find_first_of('.', 0);
		r = myStoi(literal.substr(li + 1, literal.length() - 1)) / pow(10, literal.length() - li - 1);				
	}
	l =	myStoi(literal.substr(0, li)); //
	return(l + r);
}

double ScalarConverter::convert_double(std::string literal)
{
	int li;
	double l; // first half
	double r; // second half
	
	if (literal.find_first_of('.', 0) == std::string::npos)
	{
		li = literal.length();
		r = 0;
	}
	else
	{
		li = literal.find_first_of('.', 0);
		r = myStoi(literal.substr(li + 1, literal.length() - 1)) / pow(10, literal.length() - li - 1);				
	}
	l =	myStoi(literal.substr(0, li)); //
	return (l + r);
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
