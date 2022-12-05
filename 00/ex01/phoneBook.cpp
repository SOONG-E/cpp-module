/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:54 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/05 20:02:45 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

void	PhoneBook::addContact(){
	std::string	ans;
	idx = idx >= 8 ? 0 : idx;

	draw_division_line();
	do{
		std::cout << "first name : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].setFirstName(ans));

	do{
		std::cout << "last name : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].setLastName(ans));

	do{
		std::cout << "nickname : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].setNickname(ans));

	do{
		std::cout << "phone number (only number) : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].setPhoneNumber(ans));

	do{
		std::cout << "darkest secret : ";
		std::cin >> ans;
		check_stream();
	}
	while (book[idx].setDarkestSecret(ans));
	
	++idx;
	num = num < 8 ? ++num : num; 
}

void	PhoneBook::showBook(){
	draw_division_line();
	std::cout << "📞 My Awesome PhoneBook 📖" << std::endl;
	draw_division_line();
	std::cout << "index" << "|" << "first name" << "|" << " last name" << "|" << " nickname" << std::endl;

	for (int i = 0; i < num; ++i)
	{
		std::cout << std::setw(5) << i + 1 << "|";
		book[i].showContact();
	}
}

void	PhoneBook::searchBook(){
	int	temp_idx;

	if (!num){
		std::cout << "no entry" << std::endl;
		return ;
	}
	while (1)
	{
		showBook();
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
		book[temp_idx - 1].showDetailedContact();
	}
}
