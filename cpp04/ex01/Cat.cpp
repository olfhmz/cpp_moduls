#include "Cat.hpp"

Brain *Cat::getBrain() {
	return (_brain);
}

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &src) : Animal() {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	_type = src._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "~ ~~meow~~ ~" << std::endl;
}
