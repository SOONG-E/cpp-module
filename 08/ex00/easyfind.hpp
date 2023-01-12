#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T vec, int n){
	typename T::iterator result = std::find(vec.begin(), vec.end(), n);

	if (result == vec.end())
		throw std::invalid_argument("n isn't exist in vec");
	return (result);
}

#endif