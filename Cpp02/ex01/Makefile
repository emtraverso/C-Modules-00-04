NAME = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
all = $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
