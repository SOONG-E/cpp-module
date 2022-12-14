/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:39:56 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:39:57 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria(AMateria &obj){
	type = obj.type;
}

AMateria& AMateria::operator=(AMateria &obj){
	type = obj.type;

	return (*this);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const{
	return (type);
}

void AMateria::use(ICharacter& target){
	std::cout << "AMateria " << target.getName() << std::endl;
}
