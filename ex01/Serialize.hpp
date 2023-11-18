#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <stdint.h>

struct Data
{
	int num;
};

class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(const Serializer& obj);
		Serializer& operator=(const Serializer& obj);
		~Serializer();
};

#endif