#include "Span.hpp"
#include <iostream>

int main(){
	{	
		std::cout << "--------------------------------------" << std::endl;
		Span sp(5);

		try{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch(std::exception &e){
			std::cout << e.what() <<std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		std::cout << "--------------------------------------" << std::endl;
		Span sp(4);

		try{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch(std::exception &e){
			std::cout << e.what() <<std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		std::cout << "--------------------------------------" << std::endl;
		Span sp(10000);

		sp.addNumber();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{	
		std::cout << "--------------------------------------" << std::endl;
		Span sp(1);

		sp.addNumber(1);

		try{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() <<std::endl;
		}
		try{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception &e){
			std::cout << e.what() <<std::endl;
		}
	}
}