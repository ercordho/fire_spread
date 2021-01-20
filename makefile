# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/20 13:01:59 by ercordho          #+#    #+#              #
#    Updated: 2021/01/20 13:28:18 by ercordho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fire_spread.a
HEADER	=	include
SRCS	=	srcs/check_square.c \
			srcs/display_map.c \
			srcs/ft_memset.c \
			srcs/init_fire_spread_struct.c \
			srcs/init_map.c

OBJS	=	$(SRCS:.c=.o)
FLAGS	=	-Wall -Wextra -Werror

.c.o:		$(SRCS)
			@gcc $(FLAGS) -I $(HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)

all:		$(NAME)
clean:
			@rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME) a.out
re:			fclean all
.PHONY:		clean fclean all re
