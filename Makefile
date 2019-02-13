# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 13:54:51 by emamenko          #+#    #+#              #
#    Updated: 2019/02/12 16:26:21 by emamenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SOURCES	=	ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
			ft_strncat.c ft_strlcat.c ft_strstr.c ft_strcmp.c ft_strncmp.c \
			ft_atoi.c ft_strchr.c ft_strnstr.c ft_strrchr.c ft_isalpha.c \
			ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
			ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
			ft_memmove.c ft_memchr.c ft_memcmp.c \
			ft_memalloc ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
			ft_striter.c ft_striter.c 
OBJECTS	=	$(SOURCES:.c=.o)

.PHONY:		$(NAME) all clean fclean re

all:		$(NAME)

$(NAME):
			gcc -Wall -Wextra -Werror -c $(SOURCES)
			ar rc $(NAME) $(OBJECTS)
			ranlib $(NAME)

clean:
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all
