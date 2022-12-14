/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:20:47 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 21:28:49 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public :
		int  getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed();
		~Fixed();
		Fixed(const Fixed &object);
		Fixed& operator=(const Fixed &object);

	private :
		int _fix;
		static const int _fraction = 8;	
};

#endif
