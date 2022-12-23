#include "easyfind.hpp"
#include <iostream>

int main(){
	std::vector<int> a;
	a.push_back(1);
	a.push_back(4);
	a.push_back(3);
	a.push_back(9);
	a.push_back(23);
	std::cout << easyfind(a, 3) <<std::endl;
	std::cout << easyfind(a, 2) <<std::endl;

	return (0);
}