/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/22 13:21:26 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook.h"

class PhoneBook{
	private:
		int			num;
		int			idx;
		Contact		book[8];

	public:
		void	addContact();
		void	searchBook();
		void	showBook();
		std::string	getString(std::string attr);
		PhoneBook() : num(0), idx(0) {};

};

#endif