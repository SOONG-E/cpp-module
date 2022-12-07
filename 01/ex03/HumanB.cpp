/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:42:11 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 10:46:47 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	if (!_weapon){
		std::cout << _name << " has no weapon " << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}