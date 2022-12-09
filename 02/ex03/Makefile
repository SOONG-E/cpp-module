# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/09 16:46:18 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp	\
		Fixed.cpp	\
		Point.cpp	\
		bsp.cpp

OBJS = $(SRCS:.cpp=.o)

all : Point

Point : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Point

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
