#include "phoneBook.h"

void	PhoneBook::new_contact(){
	std::string	ans;
	idx = idx >= 8 ? 0 : idx;

	draw_division_line();
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
	draw_division_line();
	std::cout << "📞 My Awesome PhoneBook 📖" << std::endl;
	draw_division_line();
	std::cout << "index" << "|" << "first name" << "|" << " last name" << "|" << " nickname" << std::endl;

	for (int i = 0; i < num; ++i)
	{
		std::cout << std::setw(5) << i + 1 << "|";
		book[i].show_contact();
	}
}

void	PhoneBook::search_book(){
	int	temp_idx;

	if (!num){
		std::cout << "no entry" << std::endl;
		return ;
	}
	while (1)
	{
		show_book();
		do {
			check_stream();
			std::cout << "type idx [1~" << num << " or 0 to EXIT] : ";
			std::cin >> temp_idx;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');	
				continue;
			}
		}
		while (temp_idx < 0 || temp_idx > num);
		if (!temp_idx)
			break ;
		book[temp_idx - 1].show_detailed_contact();
	}
}
