# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/09 20:24:38 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : ScavTrap

ScavTrap : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) ScavTrap

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
