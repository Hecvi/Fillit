# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klaurine <klaurine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/28 17:11:53 by klaurine          #+#    #+#              #
#    Updated: 2019/07/11 15:13:21 by klaurine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = first_part.c second_part.c third_part.c fourth_part.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

FLAGS = -Wall -Wextra -Werror

HEADER = -c -I fillit.h

all: $(NAME)

$(OBJ): %.o: %.c
		gcc -c $(FLAGS) -I libft/ $< -o $@

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(OBJ)
	gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all