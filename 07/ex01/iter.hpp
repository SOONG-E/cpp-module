#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void A(const T t){
	std::cout << "A" << t << " " << std::endl;
}

template <class T>
void B(const T &t){
	std::cout << "B" << t << " " << std::endl;
}

template <class T>
void iter(const T *array, int len, void (*func)(const T& element)){
	for (int i = 0; i < len; ++i)
		func(array[i]);
}

#endif