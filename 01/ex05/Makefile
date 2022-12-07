# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/07 19:47:46 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

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
