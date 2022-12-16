/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:20:47 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/16 14:36:53 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed {
	public :
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int 	toInt(void) const;
		
		Fixed();
		Fixed(const int integer);
		Fixed(const float floatingNum);
		~Fixed();
		Fixed(const Fixed &object);
		Fixed& operator=(const Fixed &object);

	private :
		int _fixed;
		static const int _fraction = 8;	
};

std::ostream& operator <<(std::ostream& outputStream, const Fixed& obj);

#endif
