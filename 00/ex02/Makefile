# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 20:22:51 by yujelee           #+#    #+#              #
#    Updated: 2022/12/07 19:43:05 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	test.cpp	\
		Account.cpp

OBJS = $(SRCS:.cpp=.o)

all : Account

Account : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Account

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
