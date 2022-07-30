#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &other)
		return *this;
	_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int raw) {
	_value = raw;
}
