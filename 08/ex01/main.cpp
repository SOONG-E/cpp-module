#include "Span.hpp"
#include <iostream>

int main(){
	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::vector<int> temp(4, 100);
	for (std::vector<int>::iterator it = temp.begin() ; it != temp.end(); ++it)
		std::cout << *it << " ";
	// sp.addNumber(temp);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	return 0;
}