##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	main.c\
		bsq_solver.c\
		col_and_lines.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/
	gcc -o $(NAME) $(OBJ) -Wall -Wextra -L./lib -lmy

clean:
	make clean -C lib/
	rm -f *~ *.o

fclean:
	make fclean -C lib/
	rm -f $(NAME) a.out

re:	fclean all

.PHONY:	all	clean	fclean	re
