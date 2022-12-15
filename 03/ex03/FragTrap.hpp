/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:11:40 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 21:12:46 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define FRAG_HIT	100
#define FRAG_ENERGY	100
#define FRAG_DAMAGE	30

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(int hit, int damage);
		FragTrap(FragTrap &obj);
		FragTrap& operator=(FragTrap& obj);
		~FragTrap();
		void highFivesGuys();
};
