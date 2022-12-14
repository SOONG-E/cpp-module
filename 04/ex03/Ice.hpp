/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:12 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:13 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public :
		Ice();
		Ice(Ice &obj);
		Ice& operator=(Ice &obj);
		~Ice();
		std::string const & getType() const;
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif