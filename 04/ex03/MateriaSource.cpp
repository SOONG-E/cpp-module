/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:24 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/10 13:37:36 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; ++i)
		source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &obj){
	for (int i = 0; i < 4; ++i)
		source[i] = obj.source[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource &obj){
	for (int i = 0; i < 4; ++i)
		source[i] = obj.source[i];

		return (*this);
}

MateriaSource::~MateriaSource(){}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; ++i){
		if (source[i] == NULL){
			source[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int i;
	
	for (i = 0; i < 4; ++i){
		if (source[i] && source[i]->getType() == type){
			break;
		}
	}
	if (i == 4)
		return (0);
	return (source[i]->clone());
}
