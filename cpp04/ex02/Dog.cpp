#include "Dog.hpp"

Brain *Dog::getBrain() {
	return (_brain);
}

Dog::Dog() : AAnimal() {
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &src) : AAnimal() {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	_type = src._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "i going to bark you" << std::endl;
	std::cout << "BARK" << std::endl  << "BARK" << std::endl << "BARK" << std::endl << "BARK" << std::endl << "BARK" << std::endl;
}
