# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:17:30 by yujelee           #+#    #+#              #
#    Updated: 2022/12/23 18:58:46 by yujelee          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS =	main.cpp
		
OBJS = $(SRCS:.cpp=.o)

all : main

main : $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) main

re : fclean
	$(MAKE) all

PHONY : all clean fclean re
