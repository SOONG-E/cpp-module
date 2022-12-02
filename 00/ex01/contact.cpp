#include "contact.hpp"

int	Contact::add_first_name(std::string first_name){
	this->first_name = first_name;
	return (1);
}

int	Contact::add_last_name(std::string last_name){
	this->last_name = last_name;
	return (1);
}

int	Contact::add_nickname(std::string nickname){
	this->nickname = nickname;
	return (1);
}

int Contact::add_phone_number(int phone_number){
	this->phone_number = phone_number;
	return (1);
}

int Contact::add_darkest_secret(std::string darkest_secret){
	this->darkest_secret = darkest_secret;
	return (1);
}
