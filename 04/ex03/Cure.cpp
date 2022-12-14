/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:05 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:06 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure &obj){
	type = obj.type;
}

Cure& Cure::operator=(Cure &obj){
	type = obj.type;

	return (*this);
}

Cure::~Cure(){}

std::string const & Cure::getType() const{
	return (type);
}

Cure* Cure::clone() const{
	Cure *ret = new Cure();

	return (ret);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}