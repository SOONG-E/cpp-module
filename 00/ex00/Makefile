# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 20:22:46 by yujelee           #+#    #+#              #
#    Updated: 2022/12/05 20:22:47 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all : megaphone

magaphone : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) megaphone

re : fclean
	$(MAKE) all

PHONY : all clean fclean re