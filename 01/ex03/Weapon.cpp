/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:42:02 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 21:05:48 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	_type = type;
}

const std::string	&Weapon::getType() const {
	const std::string &ret = _type;
	return (ret);
}
void	Weapon::setType(std::string type){
	_type = type;
}

