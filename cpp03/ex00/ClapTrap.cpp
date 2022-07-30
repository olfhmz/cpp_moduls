#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructor (with name) called" << std::endl;
	this->_name = name;
	this->_Health = 10;
	this->_Energy = 10;
	this->_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Constructor (copy) called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "Operator = called" << std::endl;
	this->_name = src._name;
	this->_Health = src._Health;
	this->_Energy = src._Energy;
	this->_Damage = src._Damage;
	return *this;
}

void ClapTrap::attack(std::string const &target) {
	_Energy--;
	if (_Energy > 0)
		std::cout << target << " attacked by " << _name << std::endl;
	else
		std::cout << _name <<"`s energy is left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_Health <= (int)amount) {
		_Health = 0;
		std::cout << "YRA POBEDA (" << _name << " is out)" << std::endl;
	}
	else if (_Health > (int)amount) {
		_Health -= amount;
		std::cout << _name << " lost " << amount << " hit points! HP: " << _Health << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	_Energy--;
	if (_Energy > 0) {
		if (amount == 0) {
			std::cout << "Shedro odnaka! Energy: " << _Energy << std::endl;
		}
		else {
			_Health += amount;
			std::cout << "He repared on " << amount << " points! HP: "
				<< _Health << std::endl;
		}
	}
	else {
		std::cout << _name <<"`s energy is left" << std::endl;
	}
	
}
