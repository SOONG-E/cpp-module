#include "phoneBook.h"

void	PhoneBook::new_contact(){
	std::string	ans;
	idx = idx >= 8 ? 0 : idx;

	do{
		std::cout << "first name : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].set_first_name(ans));

	do{
		std::cout << "last name : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].set_last_name(ans));

	do{
		std::cout << "nickname : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].set_nickname(ans));

	do{
		std::cout << "phone number (only number) : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].set_phone_number(ans));

	do{
		std::cout << "darkest secret : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].set_darkest_secret(ans));
	
	++idx;
	num = num < 8 ? ++num : num; 
}

void	PhoneBook::show_book(){
	std::cout << "📞 My Awesome PhoneBook 📖" << std::endl;
	std::cout << "index" << "|" << "first name" << "|" << " last name" << "|" << " nickname" <<std:endl;

	for (int i = 0; i < num; ++i)
	{
		std::cout << std::setw(5) << i << "|";
		book[i].show_contact();
	}

}

void	PhoneBook::search_book(){
	show_book();

}
