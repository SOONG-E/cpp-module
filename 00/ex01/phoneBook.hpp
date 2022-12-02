#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phoneBook.H"

class PhoneBook{
	private:
		int			num;
		Contact		book[8];

	public:
		void	new_contact();
		void	search_book();
		PhoneBook();

};

#endif