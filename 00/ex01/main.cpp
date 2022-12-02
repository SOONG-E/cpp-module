#include "phoneBook.h"

int main()
{
	std::string temp;
	PhoneBook	my_book;
	std::cout << "Welcome My Awesome PhoneBook!!" << std::endl;
	
	while (1){
		std::cout << "MENU >> [ADD] [SEARCH] [EXIT] " << std::endl;
		std::cin >> temp;

		temp = to_up(temp);
		if (temp == "ADD")
			my_book.new_contact();
		else if (temp == "SEARCH")
			my_book.search_book();
		else if (temp == "EXIT")
			break ;
		else
			std::cout << "doesn't exist! try again. " << std::endl;
	}
	
}