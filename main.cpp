#include "ScalarConverter.hpp"

int main()
{
	std::string x = "asd";
	ScalarConverter a;
	char z = a.convert(x[0]);
	printf("%c\n", z);
}
