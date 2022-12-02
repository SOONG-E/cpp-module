#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		int	set_first_name(std::string first_name);
		int	set_last_name(std::string last_name);
		int	set_nickname(std::string nickname);
		int set_phone_number(std::string phone_number);
		int set_darkest_secret(std::string darkest_secret);
		void	show_contact();
		Contact(){};

};

#endif