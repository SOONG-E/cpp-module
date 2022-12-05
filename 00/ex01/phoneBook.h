/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:27:56 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/05 17:27:57 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phoneBook.hpp"
#include <iostream>
#include <iomanip>

std::string to_up(std::string str);
int			is_all_digit(std::string str);
int			check_stream();
void		print_info_short(std::string str);
void		draw_division_line();