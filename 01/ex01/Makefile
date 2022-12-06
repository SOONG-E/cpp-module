# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 15:57:05 by yujelee           #+#    #+#              #
#    Updated: 2022/12/06 15:57:06 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all : Zombie

Zombie : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Zombie

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
