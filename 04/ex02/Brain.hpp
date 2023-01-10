/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:59:17 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/03 20:27:46 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	public :
		Brain();
		Brain(std::string str);
		Brain(Brain &obj);
		Brain& operator=(Brain &obj);
		std::string		getBrainCell(int idx) const;
		void			setBrainCell(int idx, std::string str);
		~Brain();
		
	private : 
		std::string ideas[100];
};

#endif