/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:56:41 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/06 15:56:42 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	yelling(Zombie *temp)
{
	temp->announce();
}

int main(){
	Zombie *a = newZombie("abc");
	a->announce();

	Zombie b;
	b.setName("qwe");
	b.announce();

	randomChump("babo");

	yelling(a);
	yelling(&b);

	delete(a);
}