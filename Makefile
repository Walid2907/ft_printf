# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 11:31:01 by wkerdad           #+#    #+#              #
#    Updated: 2025/11/11 11:35:31 by wkerdad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc

CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c
	   
BONUS =  

OBJFILES = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o  $@

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean : 
	rm -f $(OBJFILES) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re