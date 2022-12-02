#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phoneBook.h"

class PhoneBook{
	private:
		int			num;
		int			idx;
		Contact		book[8];

	public:
		void	new_contact();
		void	search_book();
		void	show_book();
		PhoneBook() : num(0), idx(0) {};

};

#endif