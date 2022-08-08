#include "Span.hpp"
#include <exception>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <iostream>

void	Span::printData(std::ostream &o, const unsigned int max) const
{
	o << "[ ";
	for (unsigned int i = 0; i < max && i < _stored; i++)
		o << _data[i] << " ";
	if (_stored > max)
		o << "... " << _data[_stored - 1] << " ";
	o << "] (" << _stored << "/" << _n << ")";
}

std::ostream	&operator<<(std::ostream &o, const Span &span)
{
	span.printData(o);
	return (o);
};

Span::Span() : _n(0), _stored(0) {
	return ;
}

Span::Span(const unsigned int n) : _n(n), _stored(0) {
	return ;
}

Span::Span(const Span &src) {
	*this = src;
}

Span::~Span() {
	_data.clear();
}

Span &Span::operator=(const Span &src) {
	if (this == &src)
		return *this;
	_data.clear();
	this->_n = src._n;
	this->_data = src._data;
	this->_stored = src._stored;
}

void Span::addNumber( const int n) {
	if (_stored >= _n)
		throw Span::aleradyFull();
	_data.push_back(n);
	_stored++;
}

int Span::longestSpan() {
	if (_stored < 2)
		throw Span::notEnoughNum();
	std::vector<int>::iterator max = std::max_element(_data.begin(), _data.end());
	std::vector<int>::iterator min = std::min_element(_data.begin(), _data.end());
	return (*max - *min);
}

int Span::shortestSpan() {
	int res;
	std::vector<int> tmp = _data;

	if (_stored < 2)
		throw Span::notEnoughNum();
	sort(tmp.begin(), tmp.end());
	res = tmp[1] - tmp[0];
		for (std::vector<int>::iterator it = tmp.begin() + 1;it < tmp.end() - 1; it++) {
		if (*(it + 1) - *it < res)
			res = *(it + 1) - *it;
	}
	return res;
}
