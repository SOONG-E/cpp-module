/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:18:03 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 20:18:09 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	public :
		void complain(std::string level);
		Harl();

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		std::string levels[4];
};

#endif