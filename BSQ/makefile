# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dventura <dventura@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 12:39:43 by dventura          #+#    #+#              #
#    Updated: 2023/08/30 16:43:33 by enanot-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
SRCS	= main.c ft_divstr.c ft_fill.c ft_getchars.c ft_read.c ft_solve.c ft_size.c ft_tradgrid.c ft_printmap.c ft_checkmap.c
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
OBJS	= ${SRCS:.c=.o}
RM		= rm -rf

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o		: %.c	
		$(CC) $(FLAGS) -c $< -o $@

clean	:
		$(RM) $(OBJS)

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
