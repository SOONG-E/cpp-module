/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:40:07 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:08 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public :
		Cure();
		Cure(Cure &obj);
		Cure& operator=(Cure &obj);
		~Cure();
		std::string const & getType() const;
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif