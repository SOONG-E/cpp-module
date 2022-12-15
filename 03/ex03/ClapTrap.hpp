/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:27:53 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:14:02 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define CLAP_HIT	10
#define CLAP_ENERGY	10
#define CLAP_DAMAGE	0

class ClapTrap{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit, int energy, int damage);
		ClapTrap(ClapTrap &obj);
		ClapTrap& operator=(ClapTrap& obj);
		~ClapTrap();
		void 	attack(const std::string& target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		std::string getName() const ;
		int		getHit() const;
		int		getEnergy() const;
		int		getDamage() const;
		void	setName(std::string name);
		void	setHit(int hit);
		void	setEnergy(int energy);
		void	setDamage(int damage);
	
	protected :
		std::string _name;
		int			_hit;
		int			_energy;
		int			_damage;
};

#endif