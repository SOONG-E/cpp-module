/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:43 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/07 16:38:44 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"

std::string String::getString(){
	return (_str);
}

void	String::replace(std::string s1, std::string s2){
	size_t		idx;
	int			len = _str.length();

	idx = _str.find(s1);
	while (idx != std::string::npos)
	{
		_str.erase(idx, s1.length());
		_str.insert(idx, s2);
		idx = _str.find(s1, idx + s2.length());
	}
}
