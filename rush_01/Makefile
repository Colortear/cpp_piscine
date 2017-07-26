# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdebs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 12:30:33 by wdebs             #+#    #+#              #
#    Updated: 2017/07/13 15:48:08 by wdebs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm
CC = clang++
OBJECTS = src/main.o
CFLAGS = -Wall -Werror -Wextra
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -I. $(OBJECTS) -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
