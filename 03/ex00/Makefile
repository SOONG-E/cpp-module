# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/09 20:21:53 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp	\
		ClapTrap.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : ClapTrap

ClapTrap : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) ClapTrap

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
