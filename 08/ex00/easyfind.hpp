#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>

template <typename T>
int easyfind(T vec, int n){
	for (typename T::size_type i = 0; i != vec.size() ; ++i){
		if (vec[i] == n)
			return (i);
	}
	return (-1);
}

#endif