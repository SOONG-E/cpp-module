/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:53 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/09 20:35:50 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &obj);
		ClapTrap& operator=(ClapTrap& obj);
		~ClapTrap();
		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		std::string getName();
		int		getHit();
		int		getEnergy();
		int		getDamage();
	
	private :
		std::string _name;
		int			_hit;
		int			_energy;
		int			_damage;
};

#endif