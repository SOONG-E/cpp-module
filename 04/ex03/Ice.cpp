/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:10 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:11 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice &obj){
	type = obj.type;
}

Ice& Ice::operator=(Ice &obj){
	type = obj.type;

	return (*this);
}

Ice::~Ice(){}

std::string const & Ice::getType() const{
	return (type);
}

Ice* Ice::clone() const{
	Ice *ret = new Ice();

	return (ret);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
