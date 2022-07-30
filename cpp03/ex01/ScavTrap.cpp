#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scav constructor (with name) called" << std::endl;
	_name = name;
	_Health = 100;
	_Energy = 50;
	_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "Scav copy constructor called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scav destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "Scav operator = called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "Guard mod ON" << std::endl;
}

void ScavTrap::attack(const std::string & target ) const {
	//_Energy--;
	if (_Energy > 0)
		std::cout << target << " attacked by " << _name << std::endl;
	else
		std::cout << _name <<"`s energy is left" << std::endl;
}
