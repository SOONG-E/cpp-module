/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:28:00 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/20 16:13:55 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

std::string trim(std::string str)
{
	int i;
	for (i = 0; i < (int)str.length(); ++i){
		if (!isspace(str.at(i)))
			break ;
	}
	str.erase(0, i);
	for (i = (int)str.length() - 1; i >= 0; --i){
		if (!isspace(str.at(i)))
			break ;
	}
	str.erase(i + 1, str.length() - i + 1);
	return (str);
}

std::string to_up(std::string str)
{
	std::string ret;

	for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
		ret+= std::toupper(*it);
	return (ret);
}

int is_all_digit(std::string str)
{
	for (std::string::iterator it=str.begin(); it!=str.end(); ++it){
		if (!isdigit(*it))
			return (1);
	}
	return (0);
}

int	check_stream()
{
	if (std::cin.eof())
		exit(1);
	return (0);
}

void	print_info_short(std::string str)
{
	if (str.length() < 10){
		std::cout << std::setw(10) << str ;
		return ;
	}
	for (int i = 0; i < 9; ++i){
		std::cout << str.at(i);
	}
	std::cout << ".";
}

void	draw_division_line()
{
	std::cout << "--------------------------------------" << std::endl ;
}