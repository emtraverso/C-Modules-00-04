NAME		=	ClapTrap

SRCS		=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \

OBJS		=	$(SRCS:.cpp=.o)
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	$(CC) $(FLAGS)

%.o : %.cpp
			$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	${OBJS}
			$(COMPILE) $(OBJS) -o $(NAME)

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean all re