# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpeggie <tpeggie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 21:15:47 by tpeggie           #+#    #+#              #
#    Updated: 2022/03/13 21:25:33 by tpeggie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =       libft.a


LIST    =       ft_atoi.c\
                ft_bzero.c\
                ft_calloc.c\
                ft_isalnum.c\
                ft_isalpha.c\
                ft_isascii.c\
                ft_isdigit.c\
                ft_isprint.c\
                ft_itoa.c\
                ft_memchr.c\
                ft_memcmp.c\
                ft_memmove.c\
                ft_memcpy.c\
                ft_memset.c\
                ft_putchar_fd.c\
                ft_putendl_fd.c\
                ft_putnbr_fd.c\
                ft_putstr_fd.c\
                ft_split.c\
                ft_strchr.c\
                ft_strdup.c\
                ft_striteri.c\
                ft_strjoin.c\
                ft_strlcat.c\
                ft_strlcpy.c\
                ft_strlen.c\
                ft_strmapi.c\
                ft_strncmp.c\
                ft_strnstr.c\
                ft_strrchr.c\
                ft_strtrim.c\
                ft_substr.c\
                ft_tolower.c\
                ft_toupper.c

SRCS_B  =       ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
                ft_lstsize_bonus.c ft_lstlast_bonus.c\
			    ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			    ft_lstclear_bonus.c ft_lstiter_bonus.c\
			    ft_lstmap_bonus.c

HEADER  =       libft.h

OBJ     =       $(patsubst %.c,%.o, $(LIST))

RM      =       rm -f
FLAGS   =       -Wall -Wextra -Werror -I$(HEADER)
CC      =       gcc

all:    $(NAME)

$(NAME)	:	$(HEADER) $(OBJ)
					ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
					$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:     clean
	$(RM)	$(NAME)

re:	fclean  $(NAME)

.PHONY:     all clean fclean re
