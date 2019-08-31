# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ukaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 21:30:44 by ukaron            #+#    #+#              #
#    Updated: 2019/08/16 14:15:33 by ukaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS =  main.c ft_getcube.c ft_valid.c ft_move.c  ft_check_hor.c ft_check_ver.c get_next_line.c ft_save.c ft_new_map.c  ft_print_map.c ft_read_cube.c ft_print_cube.c ft_cube_abc.c ft_feel_it.c

INCLUD = fillit.h

OBJ = *.o

all: 
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@gcc -o $(NAME) $(OBJ) libft/libft.a
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
