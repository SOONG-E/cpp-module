#include "phoneBook.h"

int	Contact::set_first_name(std::string first_name){
	if (!first_name.std::string::length())
		return (1);
	this->first_name = first_name;
	return (0);
}

int	Contact::set_last_name(std::string last_name){
	if (!last_name.std::string::length())
		return (1);
	this->last_name = last_name;
	return (0);
}

int	Contact::set_nickname(std::string nickname){
	if (!nickname.std::string::length())
		return (1);
	this->nickname = nickname;
	return (0);
}

int Contact::set_phone_number(std::string phone_number){
	if (!phone_number.std::string::length())
		return (1);
	else if (is_all_digit(phone_number))
		return (1);
	this->phone_number = phone_number;
	return (0);
}

int Contact::set_darkest_secret(std::string darkest_secret){
	if (!darkest_secret.std::string::length())
		return (1);
	this->darkest_secret = darkest_secret;
	return (0);
}
//배열로 바꿀까?!!!!!!!!?!?!?!?!?!?!!?!?!??!?!?!!?!?!?

void	show_contact(){

}
