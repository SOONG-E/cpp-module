/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 19:17:00 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	DiamondTrap i;

	DiamondTrap me("hihi");
	DiamondTrap you("you");
	DiamondTrap t(me);
	DiamondTrap z = you;

	std::cout << "\nconstructor\n" << std::endl;
	
	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("t");
	t.takeDamage(me.getDamage());
	you.beRepaired(10);
	me.attack("you");
	you.takeDamage(me.getDamage());

	i.whoAmI();

	std::cout << "\ndestructor\n" << std::endl;
}