#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

typedef	enum{
	first_name, last_name, nickname, phone_number, darkest_secret
} contact_member;

class Contact
{
	private:
		std::string		contact[5];
		contact_member	contact_mem;

	public:
		void	draw_contact(void);
};

class PhoneBook
{
private:
	Contact my_phonebook[8];
	int		contact_idx;

public:
	void	new_contact(Contact new_contact);
	void	draw_phonebook(void);
};

phoneBook::phoneBook()
{
	my_phonebook = {Contact(), Contact(), Contact(), Contact(), Contact(), Contact(), Contact(), Contact()};
	contact_idx = 0;
}

phoneBook::~phoneBook()
{
}



		// std::string		first_name; 
		// std::string		last_name;
		// std::string		nickname;
		// std::string		phone_number;
		// std::string		darkest_secret;
#endif