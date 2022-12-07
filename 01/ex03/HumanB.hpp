/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:46:23 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 10:42:45 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	public : 
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);

	private :
		std::string	 _name;
		Weapon		 *_weapon;
};