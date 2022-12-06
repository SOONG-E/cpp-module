/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:57:10 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/06 16:04:08 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie{

	private :
		std::string name;

	public :
		void		setName(std::string name);
		void 		announce(void);
		Zombie(){};
		Zombie(std::string name);
		~Zombie();
};