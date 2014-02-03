#
## Makefile for test1 in /home/raynau_a/test_zone/library_test2
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Oct 21 16:23:34 2013 a
## Last update Mon Feb  3 17:40:02 2014 a
##

SRCS	= my_putchar.c \
	  my_isin.c \
	  my_put_nbr.c \
	  my_put_nbr_base.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_getnbr.c \
	  my_getnbr_base.c \
	  my_strcmp.c \
	  my_put_doublechar.c \
	  my_strdup.c \
	  my_free_doublechar.c \
	  expose.c

OBJS	= 	$(SRCS:.c=.o)

NAME	= 	libmy.a

FLAG1   =	*~

FLAG2   =       *\#

RM	=	rm -f

all:    fclean $(NAME)
	rm *.o
	cp libmy.a ../libmy.a
	cp my.h ../my.h

$(NAME):
	cc -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

spe:	all
	rm *.o

re:	fclean all

tot:
	$(RM) $(FLAG1)
	$(RM) $(FLAG2)
