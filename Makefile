# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 13:54:51 by emamenko          #+#    #+#              #
#    Updated: 2019/02/11 15:35:25 by emamenko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SOURCES	=	ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
			ft_strncat.c ft_strlcat.c ft_strstr.c ft_strcmp.c ft_strncmp.c \
			ft_atoi.c
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
