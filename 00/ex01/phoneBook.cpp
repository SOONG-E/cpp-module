#include "phoneBook.hpp"

void	Contact::draw_contact()
{
}

void	PhoneBook::new_contact(Contact new_contact)
	{
		my_phonebook[contact_idx] = new_contact;
		contact_idx = (++contact_idx) % 8;
	}

void	PhoneBook::draw_phonebook()
{
	for (int i = 0; i < 55; ++i)
		std::cout<<"*";
	std::cout<<std::endl;
	for (int i = 0; i < 8 ; ++i)
		my_phonebook[i].draw_contact();
	for (int i = 0; i < 55; ++i)
		std::cout<<"*";
	std::cout<<std::endl;
}

int main ( )
{
	PhoneBook	my_phonebook();
	std::string cmd;
	
	while (1)
	{
		std::cout << "[ADD]\t[SEARCH]\t[EXIT]" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{

		}
		else if (cmd == "SEARCH")
		{

		}
		else if (cmd == "EXIT")
			break;
		else
			continue;
	}

}