#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout	<< "AAnimal default constructor called" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout	<< "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		_type = src._type;

	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout	<< "✧ unknown sound ✧" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout	<< "AAnimal destructor called" << std::endl;
}
