#include "Span.hpp"
#include <algorithm>
#include <iterator> 
#include <limits.h>
#include <vector>
#include <cstdlib>

Span::Span(){}

Span::Span(int n) : _maxAmount(static_cast<std::set<int>::size_type>(n)){}

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
		throw std::out_of_range("Span is full");
	_spots.insert(num);
}

int	getRandomInt(int n){
	(void)n;

	srand(time(NULL));

	return (rand());
}

void Span::addNumber(){
	std::vector<int> temp(_maxAmount, 1);
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); ++it)
		std::cout << *it << " " << std::endl;
	std::vector<int> temp2(1,1);
	_spots.clear();
	std::transform(temp.begin(), temp.end(), temp.begin(), getRandomInt);
	std::set<int> Q(temp.begin(), temp.end());
	for (std::set<int>::iterator it = Q.begin(); it != Q.end(); ++it)
		std::cout << *it << " ." << std::endl;
	_spots = Q;
};

int Span::shortestSpan(){
	if (_spots.size() < 2)
		throw std::range_error("add more spot!");
	std::set<int>::size_type min = UINT_MAX;

	std::set<int>::iterator it = _spots.begin();
	std::set<int>::size_type pre = *it;
	++it;
	for (; it != _spots.end() ; ++it){
		if ((*it - pre) < min)
			min = *it - pre;
		pre = *it;
	}
	return (min);
}

int Span::longestSpan(){
	if (_spots.size() < 2)
		throw std::range_error("add more spot!");
	int result = *_spots.rbegin() - *_spots.begin();

	return (result);
}