# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktwomey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 14:22:46 by ktwomey           #+#    #+#              #
#    Updated: 2018/09/10 14:27:19 by ktwomey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap
SOURCES = srcs/ft_error.c srcs/ft_stack.c srcs/main.c srcs/rot_up.c srcs/algo.c srcs/rot_down.c srcs/ss.c
INCLUDES = includes/libft/libft.a

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
