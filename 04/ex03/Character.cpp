/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:00 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:01 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::initInventory(){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character() : name("unknown"){
	initInventory();
}

Character::Character(std::string name){
	this->name = name;
	initInventory();
}

Character::Character(Character	&obj){
	name = obj.name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = obj.inventory[i];
}

Character& Character::operator=(Character &obj){
	name = obj.name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = obj.inventory[i];

	return (*this);
}

Character::~Character(){}

std::string const & Character::getName() const{
	return (name);
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; ++i){
		if (!inventory[i]){
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if (0 <= idx && idx < 4)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (0 <= idx && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
