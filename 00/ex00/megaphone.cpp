/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:28:18 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/12 16:54:49 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	for (int i = 1; i < ac ; ++i)
	{
		std::string str(av[i]);
		for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
			std::cout << ((char)std::toupper(*it));
	}
	std::cout<<std::endl;
	return (0);
}
