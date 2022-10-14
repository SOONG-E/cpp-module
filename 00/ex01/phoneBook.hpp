#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name; 
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
}

class PhoneBook
{
private:
	Contact my_phonebook[8];
	int		contact_idx = 0;

public:
	void	new_contact(Contact new_contact)
	{
		my_phonebook[contact_idx] = new_contact;
		contact_idx = (++contact_idx) % 8;
	}
	void	draw_phonebook(void)
	{
		for (int i = 0; i < 8 ; ++i)
		{
			
		}
	}
	phoneBook(/* args */);
	~phoneBook();
};

phoneBook::phoneBook(/* args */)
{
}

phoneBook::~phoneBook()
{
}



#endif