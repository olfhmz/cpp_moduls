#include "WrongCatDog.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor Wrong Animal called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal sounds*" << std::endl;
	return ;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

 //CAT

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor was called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "(fake)Meeeoww" << std::endl;
	return ;
}
