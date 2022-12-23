#include "Array.hpp"
#include <iostream>

int main(){
	Array<int> a(10);

	a[0] = 1;

	std::cout << a[0] << std::endl;

	Array<std::string> b(1);

	b[0] = "asdasdasdasdad";

	std::cout << b[0] << std::endl;
	std::cout << b.size() << std::endl;
	// std::cout << b[1] << std::endl; //exception case

	// Array<int> d;
	// std::cout << d[0] << std::endl;
}