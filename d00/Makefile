NAME =
CC = clang++
OBJECTS =
CFLAGS = -Wall -Werror -Wextra -g
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
