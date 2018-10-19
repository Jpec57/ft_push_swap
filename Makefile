# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbella <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 14:10:19 by jbella            #+#    #+#              #
#    Updated: 2018/10/06 14:41:33 by jbella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM=rm -f

CHECKER_DIR=srcs/checker
SWAP_DIR=srcs/push_swap

NAME1=checker
NAME2=push_swap

LIBFT=libft/

SRCS1=$(CHECKER_DIR)/ft_checker.c			\
	 $(CHECKER_DIR)/ft_stack.c				\
	 $(CHECKER_DIR)/utils.c					\
	 $(CHECKER_DIR)/main.c					\
	 libft/libft/libft.a					\
	 libft/libftprintf.a					\

SRCS2=	$(SWAP_DIR)/ft_push_swap.c				\
		$(SWAP_DIR)/ft_stack2.c					\
		$(SWAP_DIR)/ft_compute_utils.c			\
		$(SWAP_DIR)/ft_compute_resolver.c		\
		$(SWAP_DIR)/moves_push_rot.c			\
		$(SWAP_DIR)/moves_rev_rot.c				\
		$(SWAP_DIR)/moves_swap.c				\
		$(SWAP_DIR)/ft_resolver.c				\
	 	$(CHECKER_DIR)/ft_stack.c				\
	 	$(CHECKER_DIR)/ft_checker.c				\
	 	$(CHECKER_DIR)/utils.c					\
	 	libft/libftprintf.a						\
		libft/libft/libft.a						\
		

OBJS1=$(SRCS1:.c=.o)
OBJS2=$(SRCS2:.c=.o)

INCLUDES1=	includes/ft_checker.h
INCLUDES2=	includes/ft_push_swap.h	

#COLORS

ROUGE= \033[31m
VERT= \033[32m
JAUNE= \033[33m
BLEU= \033[34m

all:
	@gcc -o $(NAME1) $(SRCS1) -I $(INCLUDES1)
		@gcc -o $(NAME2) $(SRCS2) -I $(INCLUDES2)

clean:
	@$(RM) $(OBJS1)
	@$(RM) $(OBJS2)
		@echo "♻️ "

fclean: clean

re: fclean all

.PHONY: clean fclean re
