# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 12:12:08 by tcoetzee          #+#    #+#              #
#    Updated: 2019/06/18 09:53:25 by tcoetzee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
SRC	= $(wildcard ft_*.c)
OBJ	= $(SRC:%.c=%.o) #everything in SRC, BUT change .c to .o

.PHONY: clean

all: $(NAME)# Does all exist, if it does is it up-to-date
	
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "stuff gets made"	
$(OBJ): $(SRC)
	@gcc $(CFLAGS) $(SRC)

clean: 
	@rm -f $(OBJ)	# remove output files

fclean: clean
	@rm -f $(NAME)	# remove libft.a

re: fclean all

