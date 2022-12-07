/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:42:05 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 20:17:05 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	public : 
		const std::string	&getType();
		void				setType(std::string type);
		Weapon(std::string type);
		Weapon() {};
	
	private :
		std::string _type;
};

#endif