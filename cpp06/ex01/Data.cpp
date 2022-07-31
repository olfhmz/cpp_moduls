#include "Data.hpp"

Data::Data() {
	_someData = "";
}

Data::Data(const Data &rhs) {
	_someData = rhs._someData;
}

Data &Data::operator=(const Data &rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

Data::~Data() {
}

void Data::setData(std::string str) {
	this->_someData = str;
}

std::string Data::getData() {
	return this->_someData;
}
