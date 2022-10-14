#include "phoneBook.hpp"

void	Contact::draw_contact()
{
	std::vector<std::string>::iterator it;
	for (it=my_contact.begin();it!=my_contact.end();it++)
		std::cout<<"|"<<(*it);
	std::cout<<"|"<std::endl;
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
	std::string cmd();
	std::vector<std::string> new_contact;
	while (1)
	{
		std::cout<<"[ADD]\t[SEARCH]\t[EXIT]"<<std::endl;
		std::cin>>cmd;
		if ()

	}

}