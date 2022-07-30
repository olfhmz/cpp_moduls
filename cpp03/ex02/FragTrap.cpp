#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Frag constructor (with name) called" << std::endl;
	_name = name;
	_Health = 100;
	_Energy = 100;
	_Damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	std::cout << "Frag copy constructor called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
}

FragTrap::~FragTrap() {
	std::cout << "Frag destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "Frag operator = called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Hey! " << _name << " High five!" << std::endl;
}
