#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span{
	public : 
		Span();
		Span(int n);
		Span(Span &obj);
		Span& operator=(Span &obj);
		~Span();
		void addNumber(int num);
		void addNumber(std::vector<int> dummy);
		int shortestSpan();
		int longestSpan();

	private :
		std::vector<int>		_spots;
		std::vector<int>::size_type	_maxAmount;

};

#endif