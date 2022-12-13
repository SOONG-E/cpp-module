# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/13 16:42:53 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\
		Animal.cpp		\
		Cat.cpp			\
		Dog.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : Animal

Animal : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) Animal

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
