#include "Array.hpp"
#include <iostream>

int main(){
	Array<int> a(10);

	a[0] = 1;

	std::cout << a[0] << std::endl;

	Array<std::string> b(2);

	b[0] = "test!";
	b[1] = "hihi";


	std::cout << b[0] << std::endl;
	std::cout << b.size() << std::endl;

	Array<std::string> c(b);
	std::cout << c[0] << std::endl;
	std::cout << c.size() << std::endl;

	c[0] = "changed";
	std::cout << "after change b[0] : " <<b[0] << std::endl;
	std::cout << "after change c[0] : "<< c[0] << std::endl;

	// std::cout << b[2] << std::endl; //exception case

	// Array<int> d;
	// std::cout << d[0] << std::endl;
}