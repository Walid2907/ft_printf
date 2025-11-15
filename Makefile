# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 11:31:01 by wkerdad           #+#    #+#              #
#    Updated: 2025/11/14 18:24:50 by wkerdad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc

CFLAGS = -Wall -Wextra -Werror
SRCS = ft_low_hexa.c ft_pointer.c ft_print_char.c ft_printf.c ft_print_str.c ft_putnbr.c ft_putnbr_unsigned.c ft_strlen.c ft_up_hexa.c
	   
#BONUS =  

OBJFILES = $(SRCS:.c=.o)
#BONUS_OBJ = $(BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

%.o : %.c
	$(CC) -c $< -o  $@

#bonus: $(OBJ) $(BONUS_OBJ)
#	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean : 
	rm -f $(OBJFILES) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
