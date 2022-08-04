#include <stdint.h>
#include <string>
#include <iostream>

struct Data {
    std::string _value;
};


uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data		*data;
	uintptr_t	serialized;
	Data		*deserialized;

	data = new Data();
    data->_value = "hello world";

	std::cout << "data ptr = " << data << std::endl;
	std::cout << "\t value = " << data->_value << std::endl;

	serialized = serialize(data);
	std::cout << "serialize(data ptr) = " << serialized << std::endl;

	deserialized = deserialize(serialized);
	std::cout << "deserialize(serialize(data ptr)) = " << deserialized << std::endl;
	std::cout << "\t value = " << deserialized->_value << std::endl;

	delete data;
	return (0);
}