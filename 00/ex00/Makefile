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