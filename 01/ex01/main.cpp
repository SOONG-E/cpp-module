/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:57:00 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 10:37:16 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	bornZombie()
{
	Zombie *a = zombieHorde(10, "born");
}

int main(){
	bornZombie();
	Zombie *a = zombieHorde(10, "hey");

	delete [] a;
	
}