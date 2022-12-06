/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:56:22 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/06 16:09:05 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name){
	Zombie	*ret = new Zombie[N];

	for (int i = 0; i < N; ++i)
	{
		ret[i] = Zombie(name);
		ret[i].announce();
	}
	return (ret);
}
