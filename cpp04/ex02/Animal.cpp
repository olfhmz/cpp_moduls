#include "Animal.hpp"

Brain *Animal::getBrain() {
	return NULL;
}

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	_type = src._type;
	return *this;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	std::cout << "Animal ~~sound~~" << std::endl;
}
