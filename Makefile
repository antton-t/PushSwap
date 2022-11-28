# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antton-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 18:57:58 by antton-t          #+#    #+#              #
#    Updated: 2022/11/28 11:41:58 by antton-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PushSwap
CC = gcc
HEAD = -I./includes
CFLAGS = -Wall -Wextra -Werror
FILES = main.c\

DIR_PARSE =	srcs/ft_get_nb.c \
		srcs/ft_lst_size.c \
		srcs/ft_swap.c \
		srcs/ft_sort_tab.c \
		srcs/ft_sort_three.c \
		srcs/ft_sort_hundred.c \
		srcs/ft_sort_five_hundred.c \
		srcs/ft_sort_in_tab.c \
		srcs/ft_sort_two.c \
		srcs/ft_free_lst.c \
		srcs/ft_sort_five.c \
		srcs/ft_sort_five1.c \
		srcs/ft_sort_four.c \
		srcs/ft_fill_a.c \
		srcs/ft_check_argv1.c \
		srcs/rules/ft_sa.c \
		srcs/rules/ft_sb.c \
		srcs/rules/ft_pa.c \
		srcs/rules/ft_pb.c \
		srcs/rules/ft_rb.c \
		srcs/rules/ft_ra.c \
		srcs/rules/ft_rra.c \
		srcs/rules/ft_rrb.c \
		srcs/rules/ft_rrr.c \
		srcs/ft_sort_else.c \

DIR_ADD =  \

DIR_UTILS =  \

OBJ = $(FILES:.c=.o) \
			$(DIR_PARSE:.c=.o) \
			$(DIR_ADD:.c=.o) \
			$(DIR_UTILS:.c=.o) \

all :   $(NAME)

$(NAME) : $(OBJ) ./includes/ft_pushswap.h
		$(CC) $(CFLAGS) $(HEAD) $(OBJ) -o  ${NAME}

.c.o:
		$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(OBJ_DIR)/%.o: %.c
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
re: fclean all
