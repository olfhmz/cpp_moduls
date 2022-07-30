#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << "Destuctor come" << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}

void Zombie::announce(void) {
	std::cout <<  _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
