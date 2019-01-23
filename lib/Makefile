##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC	=	base_conv.c\
		int_size.c\
		my_getnbr.c\
		my_printf.c\
		my_put_nbr.c\
		my_putchar.c\
		my_putstr.c\
		my_revstr.c\
		my_str_isnum.c\
		my_strcpy.c\
		my_strdup.c\
		my_strlen.c\
		non_print_to_oct.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

gcc:
	gcc include/main.c -L. -lmy
	./a.out

clean:
	rm -f *~ *.o

fclean:
	rm -f $(NAME) a.out

re:	fclean	all

.PHONY:	all	clean	fclean	re
