/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:49 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/05 20:01:52 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		int		setFirstName(std::string firstName);
		int		setLastName(std::string lastName);
		int		setNickname(std::string nickname);
		int 	setPhoneNumber(std::string phoneNumber);
		int 	setDarkestSecret(std::string darkestSecret);
		void	showContact();
		void	showDetailedContact();
		Contact(){};

};

#endif