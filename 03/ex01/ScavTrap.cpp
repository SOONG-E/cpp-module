/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:38:21 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 21:44:45 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target){
	if (getEnergy() > 0 && getHit() > 0){
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getDamage() <<" points of damage!" << std::endl;
	}
}

ScavTrap::ScavTrap() : ClapTrap("unknown", 100, 50, 20){
	std::cout << "ScavTrap " << getName() << " is  created! " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << getName() << " is  created! " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj.getName(), obj.getHit(), obj.getEnergy(), obj.getDamage()){
	std::cout << "ScavTrap " << getName() << " is  created! " << std::endl;
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