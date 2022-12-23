// #include "Array.hpp"

template <class T>
Array<T>::Array() : _array(new T[0]), _size(0){}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n){}

template <class T>
Array<T>::Array(Array &obj){
	_array = new T[obj.size()];
	for (unsigned int i = 0; i < obj.size(); ++i)
		_array[i] = obj[i]; 
	_size = obj.size();
}

template <class T>
Array<T>& Array<T>::operator=(const Array &obj){
	delete [] _array;
	_array = new T[obj.size()];
	for (unsigned int i = 0; i < obj.size(); ++i)
		_array[i] = obj[i]; 
	_size = obj.size();
	return (*this);
}

template <class T>
unsigned int Array<T>::size(){
	return (_size);
}

template <class T>
T& Array<T>::operator[](unsigned int idx){
	// std::cout << idx << " " << _size;
	if (idx < 0 || idx >= _size)
		throw std::exception();
	return (_array[idx]);
}

template <class T>
Array<T>::~Array(){
	delete [] _array;
}
