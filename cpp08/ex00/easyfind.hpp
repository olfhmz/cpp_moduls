#ifndef EASY_H
# define EASY_H

# include <algorithm>
# include <iostream>
# include <vector>

template<typename T> 
typename T::iterator easyfind(T &a, int n) {
	return (std::find(a.begin(), a.end(), n));
}

#endif
