#
## Makefile for test1 in /home/raynau_a/test_zone/library_test2
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Oct 21 16:23:34 2013 a
## Last update Tue Feb 25 17:33:58 2014 matthieu raynaud de fitte
##

SRCS	= my_putchar.c \
	  my_isin.c \
	  my_putnbr.c \
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
	  expose.c \
	  get_next.c \
	  tab_somme.c \
	  l_init.c \
	  color_str.c

OBJS	= 	$(SRCS:.c=.o)

NAME	= 	libmy.a

FLAG1   =	*~

FLAG2   =       *\#

RM	=	rm -f

all:    fclean $(NAME)
	$(RM) $(FLAG1)
	$(RM) $(FLAG2)
	cp libmy.a ../libmy.a
	cp my.h ../my.h
	$(RM) $(OBJS)

$(NAME):
	cc -W -Wall -Wextra -c $(SRCS)
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
