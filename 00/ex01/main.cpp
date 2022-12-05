/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:52 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/05 17:27:53 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

int main()
{
	std::string temp;
	PhoneBook	my_book;
	std::cout << "Welcome My Awesome PhoneBook!!" << std::endl;
	
	while (1){
		check_stream();
		draw_division_line();
		std::cout << "MENU >> [ADD] [SEARCH] [EXIT] " << std::endl << "👉";
		std::cin >> temp;

		temp = to_up(temp);
		if (temp == "ADD")
			my_book.new_contact();
		else if (temp == "SEARCH")
			my_book.search_book();
		else if (temp == "EXIT")
			break ;
		else if (check_stream())
			break;
		else
			std::cout << "doesn't exist! try again. " << std::endl;
	}
	
}