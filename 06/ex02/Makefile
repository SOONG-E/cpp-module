# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/22 19:26:25 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp	\
		Base.cpp	\
		A.cpp		\
		B.cpp		\
		C.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : Base

Base : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Base

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
