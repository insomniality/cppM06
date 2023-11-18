#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void)
{
	srand(time(0));

	int i = rand();
	// (void)i;
	if (i % 3 == 0)
		return (new A);
	else if(i % 3 == 1)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) == NULL)
	{
		if (dynamic_cast<B*>(p) == NULL)
			std::cout << "Object type is C" << std::endl;
		else
			std::cout << "Object type is B" << std::endl;
	}
	else
		std::cout << "Object type is A" << std::endl;
	// else if (dynamic_cast<A*>(p) == NULL && dynamic_cast<C*>(p) == NULL)
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Object type is a" << std::endl;
	}
	catch(std::bad_cast)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Object type is b" << std::endl;
		}
		catch(std::bad_cast)
		{
			std::cout << "Object type is c" << std::endl;
		}
	}
}