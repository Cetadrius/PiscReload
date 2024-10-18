# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 16:14:35 by afilipe-          #+#    #+#              #
#    Updated: 2024/10/15 16:14:42 by afilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	"libft.a"
SRC_DIR = srcs
INC_DIR = includes

# souce and objects
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
       
#OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
OBJS = $(notdir $(SRCS:.c=.o))

#COMPILER & FLAGS
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
INC = -I $(INC_DIR)

# main Rule
all: $(NAME)

# Compile obj files and create the library

$(NAME):
	$(CC) $(CFLAGS) $(INC) -c $(SRCS)
	ar rc $(NAME) $(OBJS) 

# clean objt files
clean:
	/bin/rm -f $(OBJS)

# Clean object files and library
fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
