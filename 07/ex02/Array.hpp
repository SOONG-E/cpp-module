#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
	public : 
		Array();
		Array(unsigned int n);
		Array(Array &obj);
		Array& operator=(const Array &obj);
		unsigned int size();
		T& operator[](unsigned int idx);
		~Array();

	private :
		T *_array;
		unsigned int _size;
};

#include "Array.tpp"
#endif