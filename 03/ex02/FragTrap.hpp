/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:11:40 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/13 11:25:17 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		FragTrap& operator=(FragTrap& obj);
		~FragTrap();
		void highFivesGuys();
};
