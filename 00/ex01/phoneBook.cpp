/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:54 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 13:34:05 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

std::string PhoneBook::getString(std::string attr){
	std::string	ans;
	
	std::cout << attr << " : ";
	std::getline(std::cin, ans);
	check_stream();
	return (ans);
}

void	PhoneBook::addContact(){
	std::string	ans;
	
	std::cin.ignore();
	draw_division_line();

	while (book[idx].setFirstName(getString("first name")));

	while (book[idx].setLastName(getString("last name")));

	while (book[idx].setNickname(getString("nickname")));

	while (book[idx].setPhoneNumber(getString("phone number (only number)")));

	while (book[idx].setDarkestSecret(getString("darkest secret")));
	
	idx = ++idx >= 8 ? 0 : idx;
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
