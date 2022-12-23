#include "Span.hpp"
#include <algorithm>
#include <iterator> 

Span::Span(){}

Span::Span(int n) : _maxAmount(static_cast<std::vector<int>::size_type>(n)){}

Span::Span(Span &obj){
	_maxAmount = obj._maxAmount;
	_spots = obj._spots;
}

Span& Span::operator=(Span &obj){
	_maxAmount = obj._maxAmount;
	_spots = obj._spots;
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int num){
	if (_spots.size() >= _maxAmount)
		throw std::exception();
	_spots.push_back(num);
}

// void Span::addNumber(std::vector<int> dummy){
// 	std::transform(dummy.begin(), dummy.end(), std::back_inserter(_spots));

// 	std::cout << _spots.size(); << std::endl;
// }

// int Span::shortestSpan(){
	
// }

// int Span::longestSpan(){
	
// }
