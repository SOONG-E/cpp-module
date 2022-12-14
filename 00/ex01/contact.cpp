/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:47 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 13:30:53 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int	Contact::setFirstName(std::string firstName){
	firstName = trim(firstName);
	if (!firstName.std::string::length())
		return (1);
	this->firstName = firstName;
	return (0);
}

int	Contact::setLastName(std::string lastName){
	lastName = trim(lastName);
	if (!lastName.std::string::length())
		return (1);
	this->lastName = lastName;
	return (0);
}

int	Contact::setNickname(std::string nickname){
	nickname = trim(nickname);
	if (!nickname.std::string::length())
		return (1);
	this->nickname = nickname;
	return (0);
}

int Contact::setPhoneNumber(std::string phoneNumber){
	phoneNumber = trim(phoneNumber);
	if (!phoneNumber.std::string::length())
		return (1);
	else if (is_all_digit(phoneNumber))
		return (1);
	this->phoneNumber = phoneNumber;
	return (0);
}

int Contact::setDarkestSecret(std::string darkestSecret){
	darkestSecret = trim(darkestSecret);
	if (!darkestSecret.std::string::length())
		return (1);
	this->darkestSecret = darkestSecret;
	return (0);
}

void	Contact::showContact(){
	print_info_short(firstName);
	std::cout << "|";
	print_info_short(lastName);
	std::cout << "|";
	print_info_short(nickname);
	std::cout << std::endl;
}

void	Contact::showDetailedContact(){
	std::cout << "first name : " << firstName << std::endl;
	std::cout << "last name : " << lastName << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phoneNumber << std::endl;
	std::cout << "darkest secret : " << darkestSecret << std::endl;
}
