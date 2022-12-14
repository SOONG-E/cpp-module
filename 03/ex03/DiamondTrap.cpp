/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:04:57 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:23:04 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), FragTrap(FRAG_HIT, FRAG_DAMAGE), ScavTrap(SCAV_ENERGY), _name("unknown"){
	std::cout << "DiamondTrap default" << getName() << " is  created! " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(FRAG_HIT, FRAG_DAMAGE), ScavTrap(SCAV_ENERGY), _name(name){
	std::cout << "DiamondTrap with name" << getName() << " is  created! " << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &obj): ClapTrap(obj.getName() + "_clap_name", obj.getHit(), obj.getEnergy(), obj.getDamage()), FragTrap(), ScavTrap(), _name(obj.getName()){
	std::cout << "DiamondTrap copy" << getName() << " is  created! " << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& obj){
	_name = obj.getName();
	setName(obj.getName() + "_clap_name");
	setHit(obj.getHit());
	setEnergy(obj.getEnergy());
	setDamage(obj.getDamage());

	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << getName() << " is  destroyed! " << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "I have two names " << _name << ", "<< ClapTrap::_name << std::endl;
}
