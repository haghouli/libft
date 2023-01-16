# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 23:39:51 by haghouli          #+#    #+#              #
#    Updated: 2022/10/21 15:36:57 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c \
			ft_isalpha.c ft_itoa.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c \
 			ft_isascii.c ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
 			ft_memchr.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putstr_fd.c ft_putnbr_fd.c \
 			ft_putendl_fd.c ft_putchar_fd.c ft_striteri.c

SRCS_O		= $(SRCS:.c=.o)

BONUS		=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c \
 			ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c

BONUS_O	= $(BONUS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libft.a

all : $(NAME)

$(NAME) : $(SRCS_O)
		ar -rc $(NAME) $(SRCS_O)

bonus : $(BONUS_O)
		ar -rc $(NAME) $(BONUS_O)

clean :
		rm -f $(SRCS_O) $(BONUS_O)

fclean : clean
		rm -f $(NAME)

re : fclean all

