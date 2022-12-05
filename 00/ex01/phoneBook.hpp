/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/05 20:02:45 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "phoneBook.h"

class PhoneBook{
	private:
		int			num;
		int			idx;
		Contact		book[8];

	public:
		void	addContact();
		void	searchBook();
		void	showBook();
		PhoneBook() : num(0), idx(0) {};

};

#endif