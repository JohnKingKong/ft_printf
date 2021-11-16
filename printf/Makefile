# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 11:00:19 by jvigneau          #+#    #+#              #
#    Updated: 2021/10/20 11:42:11 by jvigneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	check_conditions.c ft_print_char.c ft_print_hex.c ft_print_num.c \
			ft_print_string.c ft_putchar_fd.c ft_puthexa.c ft_puthexu_fd.c \
			ft_putunbr_fd.c ft_putptr_fd.c ft_putstr_fd.c ft_printf.c \
			ft_putnbr_fd.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc


RM 		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

NAME	=	libftprintf.a

${NAME}	:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re