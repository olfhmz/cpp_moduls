#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template<typename T> void swap(T &a, T &b) {
	T c;
	c = b;
	b = a;
	a = c;
}

template<typename T> const T &max(T const &x, T const &y) {
	return (x > y ? x : y);
}

template<typename T> const T &min(T const &x, T const &y) {
	return (x < y ? x : y);
}

#endif
