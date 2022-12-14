/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:38:26 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:13:07 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAV_HIT	100
#define SCAV_ENERGY	50
#define SCAV_DAMAGE	20

class ScavTrap : virtual public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(int energy);
		ScavTrap(ScavTrap &obj);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap& obj);
		void 	attack(const std::string& target);
		void 	guardGate();

};

#endif