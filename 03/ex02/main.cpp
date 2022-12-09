/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 22:17:16 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap me("hihi");
	FragTrap you("you");
	FragTrap t(me);
	FragTrap z = you;

	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("you");
	you.takeDamage(me.getDamage());
	me.attack("t");
	t.takeDamage(me.getDamage());
	you.beRepaired(10);
	me.attack("you");
	you.takeDamage(me.getDamage());

	me.highFivesGuys();
}