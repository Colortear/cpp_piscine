# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdebs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 12:30:33 by wdebs             #+#    #+#              #
#    Updated: 2017/07/25 18:31:17 by wdebs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
CC = clang++
OBJECTS =
CFLAGS = -Wall -Werror -Wextra -g
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -I. $(OBJECTS) -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
