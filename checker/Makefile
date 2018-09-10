# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 14:18:27 by ktwomey           #+#    #+#              #
#    Updated: 2018/09/10 14:30:12 by ktwomey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
SOURCES = srcs/*.c
INCLUDES = includes/get_next_line/get_next_line.c includes/libft/libft.a

$(NAME): 
	make -C includes/libft
	gcc -o $(NAME) -Wall -Werror -Wextra $(SOURCES) $(INCLUDES)

all: $(NAME)

clean:
	make clean -C includes/libft
	rm -f $(NAME)

fclean: clean 
	make fclean -C includes/libft
	rm -f $(NAME)

re: fclean all
