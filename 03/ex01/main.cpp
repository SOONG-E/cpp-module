/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 21:44:16 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap me("hihi");
	ScavTrap you("you");
	ScavTrap t(me);
	ScavTrap z = you;

	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("t");
	t.takeDamage(me.getDamage());
	you.beRepaired(10);
	me.attack("you");
	you.takeDamage(me.getDamage());
}