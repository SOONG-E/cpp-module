#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <iostream>

class Span{
	public : 
		Span();
		Span(int n);
		Span(Span &obj);
		Span& operator=(Span &obj);
		~Span();
		void addNumber(int num);
		void addNumber();
		int shortestSpan();
		int longestSpan();

	private :
		std::set<int>		_spots;
		std::set<int>::size_type	_maxAmount;

};

#endif