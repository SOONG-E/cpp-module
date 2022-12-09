/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:56 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 20:37:18 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target){
	if (_energy > 0 && _hit > 0){
		--_energy;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage <<" points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	_hit -= amount;
	std::cout << "ClapTrap " << _name << " is attacked. lose " << amount <<" points! " << _hit << " points lefts." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energy > 0 && _hit > 0){
		--_energy;
		_hit += amount;
		std::cout << "ClapTrap " << _name << " is repaired. get " << amount << " points!" << std::endl;
	}
}

std::string ClapTrap::getName(){
	return (_name);
}

int	ClapTrap::getHit(){
	return (_hit);
}

int	ClapTrap::getEnergy(){
	return (_energy);
}

int	ClapTrap::getDamage(){
	return (_damage);
}

ClapTrap::ClapTrap() : _name("unknown"), _hit(10), _energy(10), _damage(0) {
	std::cout << _name << " is  created! " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
	std::cout << _name << " is  created! " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj){
	std::cout << _name << " is  created! " << std::endl;
	_name = obj.getName();
	_hit = obj.getHit();
	_energy = obj.getEnergy();
	_damage = obj.getDamage();
}

ClapTrap& ClapTrap::operator=(ClapTrap& obj){
	_name = obj.getName();
	_hit = obj.getHit();
	_energy = obj.getEnergy();
	_damage = obj.getDamage();

	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " is  destroyed! " << std::endl;
}