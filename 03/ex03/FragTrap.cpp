/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:15:13 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:16:23 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(){
	std::cout << "highFivesGuys !!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("unknown", FRAG_HIT, FRAG_ENERGY, FRAG_DAMAGE){
	std::cout << "FragTrap default" << getName() << " is  created! " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, FRAG_HIT, FRAG_ENERGY, FRAG_DAMAGE) {
	std::cout << "FragTrap with name" << getName() << " is  created! " << std::endl;
}

FragTrap::FragTrap(int hit, int damage) : ClapTrap() {
	std::cout << "FragTrap with hit and damage" << getName() << " is  created! " << std::endl;
	_hit = hit;
	_damage = damage;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj.getName(), obj.getHit(), obj.getEnergy(), obj.getDamage()){
	std::cout << "FragTrap with whole parameter" << getName() << " is  created! " << std::endl;
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