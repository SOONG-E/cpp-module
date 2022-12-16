# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/16 13:48:51 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\
		Bureaucrat.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : Bureaucrat

Bureaucrat : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Bureaucrat

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
