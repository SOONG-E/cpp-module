# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 20:22:40 by yujelee           #+#    #+#              #
#    Updated: 2022/12/05 20:22:43 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS =	phoneBook.cpp	\
		contact.cpp		\
		utils.cpp		\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : phoneBook

phoneBook : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) phoneBook

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
