#include "Span.hpp"
#include <iostream>

int main(){
	{	
		Span sp(4);

		try{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		// sp.addNumber(11);
		}
		catch(std::exception &e){
			std::cout << e.what() <<std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		Span sp(5);

		sp.addNumber();


		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}