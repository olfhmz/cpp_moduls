#include "Convector.hpp"

Convert::Convert() {
	i_arg = 0;
	d_arg = 0;
	c_arg = 0;
	isWrong = false;
	_type = INVALID;
	def = "";
}

//Convert::Convert(const std::string &def) {
//	i_arg = 0;
//	d_arg = 0;
//	c_arg = 0;
//	isWrong = false;
//	//_type = 
//}

Convert::~Convert() {}

Convert::Convert(const Convert &src) {
	i_arg = src.i_arg;
	d_arg = src.d_arg;
	c_arg = src.c_arg;
	isWrong = src.isWrong;
	_type = src._type;
	def = src.def;
}


Convert &Convert::operator=(const Convert &src) {
	if (this == &src)
		return *this;
	i_arg = src.i_arg;
	d_arg = src.d_arg;
	c_arg = src.c_arg;
	isWrong = src.isWrong;
	_type = src._type;
	def = src.def;
	return *this;
}

//member funks

//дополнить
void Convert::getIType() const {
	std::cout	<< "int: " 
				<< std::endl;
}

void Convert::getDType() const {
	std::cout	<< "double: " 
				<< std::endl;
}

void Convert::getCType() const {
	std::cout	<< "char: " 
				<< std::endl;
}

void Convert::getFType() const {
	std::cout	<< "float: " 
				<< std::endl;
}

