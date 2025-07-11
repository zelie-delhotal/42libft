# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:41:48 by gdelhota          #+#    #+#              #
#    Updated: 2025/07/10 04:00:21 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./srcs/
OBJ_DIR = ./objs/
INCLUDES_DIR = ./includes/

INCLUDES = -I$(INCLUDES_DIR)

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_atoi.c ft_isspace.c\
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c\
	ft_memchr.c ft_memset.c ft_bzero.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c ft_realloc.c\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_free_all.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_error.c ft_strcat.c ft_strequals.c\
	ft_strcontains.c

OBJS = $(SRCS:.c=.o)
OBJS := $(addprefix $(OBJ_DIR),$(OBJS))
SRCS := $(addprefix $(SRC_DIR),$(SRCS))

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS_BONUS = $(SRCS_BONUS:.c=.o)
OBJS_BONUS := $(addprefix $(OBJ_DIR),$(OBJS_BONUS))
SRCS_BONUS := $(addprefix $(SRC_DIR),$(SRCS_BONUS))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
