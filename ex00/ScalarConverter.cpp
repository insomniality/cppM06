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

const char* ScalarConverter::InvalidValue::what() const throw()
{
	return ("Invalid value");
};

///TODO: 023 case
///TODO: 02a3 case
///TODO: +48 case

void ScalarConverter::convert(const std::string &argv)
{
	check_arg(argv);

	// int barev = myStoi(argv);

	convert_char(argv);
	// std::cout << "char: " << convert_char(argv) << std::endl;
	std::cout << "int: " << convert_int(argv) << std::endl;
	std::cout << "float: " << convert_float(argv);
	if (argv.find_first_of('.', 0) == std::string::npos)
		std::cout << ".0";
	std::cout << 'f' << std::endl;
	std::cout << "double: " << convert_double(argv);
	if (argv.find_first_of('.', 0) == std::string::npos)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::convert_char(std::string str)
{
	#define ascii(x) static_cast<char>(myStoi(x))
	#define SYMBOL(x) (str[x] > 31 && str[x] < 127)
	#define SYMBOL2(x) (ascii(x) > 31 && ascii(x) < 127)
	#define NUMBER(x) (str[x] >= '0' && str[x] <= '9')
	#define NDSYMBOL(x) ((ascii(x) >= 0 && ascii(x) <= 31) || ascii(x) == 127)
	#define NDSYMBOL2(x) ((x >= 0 && x <= 31) || x == 127)

	std::cout << "char: ";

	if (str.size() == 1 && !NUMBER(0))
	{
		std::cout << str[0] << "\n";
		return ;
	}

	int n = myStoi(str);

	if (n > 31 && n < 127)
	{
		std::cout << static_cast<char>(n) << "\n";
	}

	if (NDSYMBOL2(n))
	{
		std::cout << "Non displayable\n";
		return ;
	}

	if (n < 0 || n > 127)	
		std::cout << "Impossible";

	return ;

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
	l =	myStoi(literal.substr(0, li));
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
	(void) obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

	// // int polarity = 0;
	// // #define p polarity

	// if (str.length() == 1) // && ascii(literal) < 32
	// {
	// 	if (SYMBOL2(str))
	// 	{
	// 		std::cout << ascii(str) << std::endl;
	// 		return ;
	// 	}
	// 	// else // ete tiva, isk mianish tiv@ imposible a
	// 	// {
	// 		if(NDSYMBOL(str))
	// 			std::cout << "Non displayable" << std::endl;
	// 		else
	// 			std::cout << "Impossible" << std::endl;
	// 		return ;
	// 	// }
	// }
	// // if (literal.length() > 1 && (literal[0] == '-' || literal[0] == '+')) // +- momnd (minimal)
	// // {
	// // 	if (literal[0] == '-')
	// // 		p = -1;
	// // 	else if (literal[0] == '+')
	// // 		p = 1;
	// // }
	// for (unsigned long i = 0; i < str.length(); i++) // tver vor linen sagh
	// {
	// 	if (!NUMBER(i))
	// 	{
	// 		if(NDSYMBOL(str))
	// 			std::cout << "Non displayable" << std::endl;
	// 		else
	// 			std::cout << "Impossible" << std::endl;
	// 		return ;
	// 	}
	// }
	// if (str.length() > 1 && str[0] == '0') // 0456 tiv goyutyun chuni xosqi
	// {
	// 	if(NDSYMBOL(str))
	// 		std::cout << "Non displayable" << std::endl;
	// 	else
	// 		std::cout << "Impossible" << std::endl;
	// 	return ;
	// }
	// if (!SYMBOL2(str)) // && ascii(literal) < 32
	// {
	// 	if(NDSYMBOL(str))
	// 		std::cout << "Non displayable" << std::endl;
	// 	else
	// 		std::cout << "Impossible" << std::endl;
	// 	return ;
	// }
	// //
	// if (str.length() == 1 && SYMBOL(0) && !NUMBER(0)) // !!!!!!!!!!!!!!!!!
	// {
	// 	std::cout << str[0] << std::endl;
	// 	return ;
	// }
	// else if (str.length() < 4 && NUMBER(0))
	// {
	// 	if (str.length() == 1)
	// 	{
	// 		if (SYMBOL2(str))
	// 		{
	// 			// if (p == -1 || p == 1)
	// 			// {
	// 			// 	if(p == -1)
	// 			// 		std::cout << literal[0];
	// 			// 	literal = literal.substr(1, std::string::npos);
	// 			// }
	// 			std::cout << ascii(str) << std::endl;
	// 			return ;
	// 		}
	// 	}
	// 	if (str.length() == 2 && NUMBER(1))
	// 	{
	// 		if (SYMBOL2(str))
	// 		{
	// 			// if (p == -1 || p == 1)
	// 			// {
	// 			// 	if(p == -1)
	// 			// 		std::cout << literal[0];
	// 			// 	literal = literal.substr(1, std::string::npos);
	// 			// }
	// 			std::cout << ascii(str) << std::endl;
	// 			return ;
	// 		}
	// 	}
	// 	if (str.length() == 3 && NUMBER(1) && NUMBER(2))
	// 	{
	// 		if (SYMBOL2(str))
	// 		{
	// 			// if (p == -1 || p == 1)
	// 			// {
	// 			// 	if(p == -1)
	// 			// 		std::cout << literal[0];
	// 			// 	literal = literal.substr(1, std::string::npos);
	// 			// }
	// 			std::cout << ascii(str) << std::endl;
	// 			return ;
	// 		}
	// 	}
	// }
	// // std::cout << "ImpossiblE" << std::endl;
	// return ;