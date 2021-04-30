# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/30 15:02:53 by lgaveria          #+#    #+#              #
#    Updated: 2021/04/30 16:33:41 by lgaveria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=		clang

CFLAGS	=		-Wall -Wextra -Werror -I .

NAME	=		libft.a

SRCS	=		ft_putchar_fd.c	\
				ft_putstr.c		\
				ft_strcmp.c		\
				ft_strdel.c 	\
				ft_strdup.c		\
				ft_strlen.c


HEAD	=		libft.h

OBJS	=		$(SRCS:.c=.o)

RM		=		rm -rf

all: $(NAME)

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	@printf '\033[38;5;29m libft building \033[38;5;50m libft.a\033[0m\n'
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@printf '\033[38;5;29m libft delete: \033[1;31m $(OBJS) \033[0m\n'
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re