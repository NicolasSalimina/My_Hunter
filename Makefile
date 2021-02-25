##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_game.c		\
		src/usage.c			\
		src/my_params.c\
		src/my_assets.c\
		src/animate.c\
		src/mouse.c\
		src/event/close.c							\
		src/event/analyse_event.c\
		main.c

SRC_TEST =

SRC_UT =	utility/myprintf/my_printf_main.c				\
			utility/myprintf/my_printf_special.c	\
			utility/myprintf/my_printf.c			\
			utility/my_put_nbr.c					\
			utility/my_putchar.c					\
			utility/my_putstr.c

OBJ	=		$(SRC:.c=.o)

OBJ_UT =		$(SRC_UT:.c=.o)

INCLUDE	=	-I./include

LIB =		-L./ -lmy

LIB_G =		-lcsfml-graphics

LIB_W =		-lcsfml-window

LIB_S =		-lcsfml-system

RM = 		rm -rf

NAME	=	my_hunter

NAME_LIB =	libmy.a

NAME_UT =	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include -g -g3 -ggdb

CFLAGS_UT =	-lcriterion --coverage

all:		$(NAME)

$(NAME):	$(OBJ)	$(OBJ_UT)
			gcc -o $(NAME) $(SRC) $(SRC_UT) $(CFLAGS) $(INCLUDE) $(LIB_G) $(LIB_S) $(LIB_W)

unit_tests: fclean all
			gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(SRC_TEST) $(LIB) $(INCLUDE) $(CFLAGS_UT)
clean:
			$(RM) $(OBJ)
			$(RM) libmy.a
			$(RM) *.o
			$(RM) src/*.o
			$(RM) utility/*.o
			$(RM) utility/myprintf/*.o

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(NAME_UT)
			$(RM) tests/*.o
			$(RM) *.gc*

re:			fclean all

tests_run : unit_tests
			./$(NAME_UT)
			gcovr --exclude tests -b