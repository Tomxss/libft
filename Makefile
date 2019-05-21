# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 12:12:08 by tcoetzee          #+#    #+#              #
#    Updated: 2019/05/21 12:15:34 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
SRC	:= $(wildcard *.c) 

OBJ	= $(SRC:%.c=%.o) #everything in SRC, BUT change .c to .o

all : $(NAME)

$(NAME): $(OBJ)	
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) $(SRC)

clean: 
	rm -f $(OBJ)	# remove output files

fclean: clean
	rm -f $(NAME)	# remove all

re: fclean all

