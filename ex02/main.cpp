#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	Base* p = generate();

	std::cout << std::endl;
	identify(p);
	std::cout << std::endl;
	identify(*p);
	std::cout << std::endl;
	
	delete p;
}