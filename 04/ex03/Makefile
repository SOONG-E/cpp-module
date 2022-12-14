# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/14 21:42:03 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp		\
		AMateria.cpp	\
		Character.cpp	\
		Cure.cpp		\
		Ice.cpp			\
		MateriaSource.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : AMateria

AMateria : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) AMateria

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
