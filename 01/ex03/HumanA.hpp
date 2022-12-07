/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:42:09 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/06 19:09:18 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	public : 
		void	attack();
		HumanA(std::string name, Weapon &weapon);

	private :
		std::string	 _name;
		Weapon		 &_weapon;
};