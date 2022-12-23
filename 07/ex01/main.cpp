#include "iter.hpp"

int main(){
	int a1[3] = {1, 2, 3};
	std::string a2[5] = {"a", "b", "c", "d", "e"};

	iter(a1, 3, A);
	std::cout << "------" << std::endl;
	iter(a1, 3, B);
	std::cout << "------" << std::endl;
	iter(a2, 5, A);
	std::cout << "------" << std::endl;
	iter(a2, 5, B);
}