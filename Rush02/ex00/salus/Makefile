# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 09:17:52 by sasalama          #+#    #+#              #
#    Updated: 2021/12/12 01:36:11 by sasalama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compile & options
CC := gcc
C_FLAGS = -Wall -Werror -Wextra

#Files
NAME := rush-02
SRC := rush-02.c print_str.c ft_get_number.c ft_is_number.c ft_strlen.c number.c print_char.c procesar_cuatro.c procesar_decimas.c procesar_dos.c procesar_tres.c procesar_uno.c procesar.c ft_one_argv.c digitos_1.c digitos_2.c procesar_cinco.c procesar_seis.c ft_two_argv.c
SRCDIR = src/
FILES = $(addprefix $(SRCDIR), $(SRC))

all: $(NAME)

$(NAME):
		$(CC) $(C_FLAGS) $(FILES) -o $(NAME)

clean:
		rm -f $(SRC:.c=.o)

fclean: clean
		rm -f $(NAME)

re: fclean all