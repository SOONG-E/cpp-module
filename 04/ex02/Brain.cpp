/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:55:22 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/04 16:52:27 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; ++i)
		ideas[i] = "...";
}

Brain::Brain(std::string str){
	for (int i = 0; i < 100; ++i)
		ideas[i] = str;
}

Brain::Brain(Brain &obj){
	for (int i = 0; i < 100; ++i)
		ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(Brain &obj){
	for (int i = 0; i < 100; ++i)
		ideas[i] = obj.ideas[i];
	
	return (*this);
}

std::string		Brain::getBrainCell(int idx) const{
	return (ideas[idx]);
}

void	Brain::setBrainCell(int idx, std::string str){
	if (idx >= 0 && idx < 100)
	ideas[idx] = str;
}

Brain::~Brain(){}