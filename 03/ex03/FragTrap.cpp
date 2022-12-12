/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:15:13 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 22:16:47 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(){
	std::cout << "highFivesGuys !!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("unknown", 100, 100, 30){
	std::cout << "FragTrap " << getName() << " is  created! " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << getName() << " is  created! " << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj.getName(), obj.getHit(), obj.getEnergy(), obj.getDamage()){
	std::cout << "FragTrap " << getName() << " is  created! " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& obj){
	setName(obj.getName());
	setHit(obj.getHit());
	setEnergy(obj.getEnergy());
	setDamage(obj.getDamage());

	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " is  destroyed! " << std::endl;
}