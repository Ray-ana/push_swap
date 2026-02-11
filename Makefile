# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzimaeva <rzimaeva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/31 14:43:40 by rzimaeva          #+#    #+#              #
#    Updated: 2026/02/11 12:11:56 by rzimaeva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I. -I$(LIBFT_PATH) -I$(PRINTF_PATH)

LIBFT_PATH	=	./libft
PRINTF_PATH	=	./ft_printf
LIBFT		=	$(LIBFT_PATH)/libft.a
PRINTF		=	$(PRINTF_PATH)/libftprintf.a

SRCS	=	ft_push.c ft_rotaters.c ft_reverse_rotaters.c ft_swaps.c \
			parsing_un.c parsing_deux.c minisort.c radix.c main.c
OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)
$(NAME):	$(OBJS)
		make -C	$(LIBFT_PATH)
		make -C	$(PRINTF_PATH)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)
%.o:	%.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_PATH)
	make clean -C $(PRINTF_PATH)

fclean:	clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(PRINTF_PATH)

re:	fclean all

.PHONY:	all clean fclean re