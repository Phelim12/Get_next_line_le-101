# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/24 22:08:57 by clcreuso     #+#   ##    ##    #+#        #
#    Updated: 2017/11/24 22:08:57 by clcreuso    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc

C_FLAGS = -Wall -Wextra -Werror

NAME = libft.a

INC = Includes/

DIR_CHR = Char/

DIR_GNL = Get_next_line/

DIR_LST = Linked_list/

DIR_MEM = Memory/

DIR_PUT = Print/

DIR_STR = String/

DIR_MATH = Math/

CHR = 	ft_isascii.c  ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_islower.c \
		ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c ft_toupper.c

GNL =	get_next_line.c

LST =	ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstnew.c \
		ft_lstmap.c 

MEM =	ft_bzero.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
		ft_memmove.c ft_memalloc.c ft_memccpy.c

PUT =	ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c ft_utf8_1.c \
		ft_utf8_3.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_utf8_2.c ft_utf8_4.c

STR =	ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
		ft_striter.c ft_striteri.c ft_strjoin.c ft_strstr.c ft_strdel.c \
		ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
		ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strequ.c \
		ft_strsub.c ft_strtrim.c ft_strlcat.c ft_strdup.c ft_strncpy.c \
		ft_strsplit.c

MATH =	ft_atoi.c ft_itoa.c ft_next_sqrt.c ft_sqrt.c ft_ilen.c

SRC = 	$(addprefix $(DIR_CHR), $(CHR)) $(addprefix $(DIR_GNL), $(GNL)) \
		$(addprefix $(DIR_LST), $(LST)) $(addprefix $(DIR_STR), $(STR)) \
		$(addprefix $(DIR_MEM), $(MEM)) $(addprefix $(DIR_PUT), $(PUT)) \
		$(addprefix $(DIR_MATH), $(MATH))

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[0;32m✅️    $(NAME) created."

./%.o: ./%.c
	@$(CC) $(CFLAGS) -I $(INC) -o $@ -c $< 

clean:
	@rm -f $(OBJ)
	@echo "\033[0;31m🗑️    Deleting object files." 

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;31m🗑️    Deleting $(NAME) executable." 

re: fclean all