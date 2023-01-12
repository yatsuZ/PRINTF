# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 15:22:13 by yzaoui            #+#    #+#              #
#    Updated: 2022/12/16 20:36:27 by yzaoui           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, \
		ft_printf.c \
		ft_printstr.c \
		ft_printchar.c \
		ft_printnbr.c \
		ft_printptr.c)

INCLUDES = includes/ft_printf.h

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

##########################################################
nettoyer:
	clear

exec_blabla:
	@echo "\nExecution du fichier test :\n"

compiltest: $(NAME)
	$(CC) $(CFLAGS) test.c $(NAME) -I includes/. -o test

exec_test: exec_blabla
	@./test

supr_blabla:
	@echo "\nSupression du fichier test.\n"

supr_test: supr_blabla fclean
	@rm -f test

test: nettoyer compiltest exec_test supr_test

norm: nettoyer
	norminette
##########################################################

.PHONY: re fclean clean all test
