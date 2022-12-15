/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:38:21 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:24:24 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target){
	if (getEnergy() > 0 && getHit() > 0){
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getDamage() <<" points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is in Gate keeper mode now." << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("unknown", SCAV_HIT, SCAV_ENERGY, SCAV_DAMAGE) {
	std::cout << "ScavTrap  default" << getName() << " is  created! " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, SCAV_HIT, SCAV_ENERGY, SCAV_DAMAGE) {
	std::cout << "ScavTrap with name" << getName() << " is  created! " << std::endl;
}

ScavTrap::ScavTrap(int energy) : ClapTrap() {
	std::cout << "ScavTrap with energy" << getName() << " is  created! " << std::endl;
	_energy = energy;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj.getName(), obj.getHit(), obj.getEnergy(), obj.getDamage()){
	std::cout << "ScavTrap copy" << getName() << " is  created! " << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& obj){
	setName(obj.getName());
	setHit(obj.getHit());
	setEnergy(obj.getEnergy());
	setDamage(obj.getDamage());

	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " is  destroyed! " << std::endl;
}