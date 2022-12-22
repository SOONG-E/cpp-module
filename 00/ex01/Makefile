# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 20:22:40 by yujelee           #+#    #+#              #
#    Updated: 2022/12/22 13:30:57 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	PhoneBook.cpp	\
		Contact.cpp		\
		utils.cpp		\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : PhoneBook

PhoneBook : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) PhoneBook

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
