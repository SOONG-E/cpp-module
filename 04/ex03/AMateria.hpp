/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:39:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/15 18:55:10 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria &obj);
		AMateria& operator=(AMateria &obj);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string type;
};

#endif