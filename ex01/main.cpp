#include "Serialize.hpp"
#include <iostream>

int main()
{
	Data		a;
	uintptr_t	b;


	b = Serializer::serialize(&a);
	std::cout << "Serialized " << b << "\n";
	std::cout << "Deserialized " << Serializer::deserialize(b) << "\n";
	std::cout << "Data address " << &a << "\n";

}