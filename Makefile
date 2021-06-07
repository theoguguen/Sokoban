##
## EPITECH PROJECT, 2021
## B-PSU-200-REN-2-1-mysokoban-theo.guguen
## File description:
## Makefile
##

SRCDIR	=	src/

SRC	=	$(SRCDIR)my_sokoban.c \
		$(SRCDIR)window.c \
		$(SRCDIR)help.c \
		$(SRCDIR)load2d.c \
		$(SRCDIR)move.c \
		$(SRCDIR)exit.c \
		$(SRCDIR)box_move.c \
		$(SRCDIR)win_check.c \
		$(SRCDIR)move_check.c \
		$(SRCDIR)my_putchar.c \
		$(SRCDIR)my_putstr.c \
		$(SRCDIR)my_strlen.c \
		$(SRCDIR)my_strcmp.c \
		$(SRCDIR)my_strncpy.c \
		$(SRCDIR)free_tab.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-lncurses -Wall -Wextra -Werror -W -I includes

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug: CFLAGS += -g
debug: re

clean:
	@rm -fr $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
