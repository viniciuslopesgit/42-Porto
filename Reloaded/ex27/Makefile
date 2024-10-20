# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vilopes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 03:58:05 by vilopes           #+#    #+#              #
#    Updated: 2024/10/20 03:58:09 by vilopes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

$(NAME):
	cc -Wall -Werror -Wextra ft_display_file.c -o $(NAME)
	rm -f *.o
	@echo "Suggested usage: ./ft_display_file l.txt"

.PHONY: all clean fclean

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
