#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

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

#endif