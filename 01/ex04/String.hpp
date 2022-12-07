/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:45 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 16:38:49 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

class String{
	public :
		std::string getString();
		void	replace(std::string s1, std::string s2);
		String(std::string str) : _str(str) {};

	private :
		std::string _str;
};