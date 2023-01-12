#include "easyfind.hpp"
#include <iostream>

int main(){
	{
		try{
			std::vector<int> a;
			a.push_back(1);
			a.push_back(4);
			a.push_back(3);
			a.push_back(9);
			a.push_back(23);
			std::cout << *easyfind(a, 3) <<std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			std::list<int> a;
			a.push_back(1);
			a.push_back(4);
			a.push_back(3);
			a.push_back(9);
			a.push_back(23);
			std::cout << *easyfind(a, 9) <<std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try{
			std::list<int> a;
			a.push_back(1);
			a.push_back(4);
			a.push_back(3);
			a.push_back(9);
			a.push_back(23);
			std::cout << *easyfind(a, -1) <<std::endl;
			std::cout << *easyfind(a, 7) <<std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
}