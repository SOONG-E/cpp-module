/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:52 by yujelee           #+#    #+#             */
/*   Updated: 2023/01/13 15:00:40 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef TYPE_HPP
#define TYPE_HPP

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define UNDEFINED 4

class Type {
	public : 
		Type();
		Type(char *str);
		Type(Type &obj);
		Type &operator=(Type &obj);
		~Type();
		int		getType();
		void	makeConversion();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
		int			_type;
		std::string _string;
		char		*_str;

	private :
		void		convertToActualType();
		double		_strAsDouble;
		double		_valueAsDouble;
		int			_valueAsInt;
		char		_valueAsChar;
		float		_valueAsFloat;
};

#endif