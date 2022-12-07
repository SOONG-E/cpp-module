/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:42:07 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 10:43:29 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}