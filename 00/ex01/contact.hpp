#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;

	public:
		int	add_first_name(std::string first_name);
		int	add_last_name(std::string last_name);
		int	add_nickname(std::string nickname);
		int add_phone_number(int phone_number);
		int add_darkest_secret(std::string darkest_secret);
		Contact();

};

#endif