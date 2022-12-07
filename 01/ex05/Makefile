# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/07 16:42:48 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	main.cpp	\
		Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all : Harl

Harl : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Harl

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
