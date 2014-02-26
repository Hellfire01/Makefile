#
## Makefile for test1 in /home/raynau_a/test_zone/library_test2
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Oct 21 16:23:34 2013 a
## Last update Wed Feb 26 21:15:54 2014 matthieu raynaud de fitte
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
	  color_str.c \
	  my_strcat.c

OBJS	= 	$(SRCS:.c=.o)

ECHO	=	echo -e

NAME	= 	libmy.a

FLAG1   =	*~

FLAG2   =       *\#

RM	=	rm -f

all	:	disp2 fclean disp $(NAME)
		@$(ECHO) '\033[0;33m - (3/4) >> suppression de tous les fichiers temporaires \033[0m'
		$(RM) $(FLAG1)
		$(RM) $(FLAG2)
		$(RM) $(OBJS)
		@$(ECHO) '\033[0;33m - (4/4) >> copie de la libmy.a et du my.h \033[0m'
		cp libmy.a ../libmy.a
		cp my.h ../my.h

$(NAME)	:
		cc -W -Wall -Wextra -c $(SRCS)
		ar rc $(NAME) $(OBJS)

disp	:
		@$(ECHO) '\033[0;33m - (2/4) >> compilation de la libmy.a \033[0m'

disp2	:
		@$(ECHO) '\033[0;33m - (1/4) >> suppression des fichiers temporaires \033[0m'

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

spe	:	all
		rm *.o

re	:	fclean all

tot	:
		$(RM) $(FLAG1)
		$(RM) $(FLAG2)

.PHONY	: all disp disp2 clean fclean spe re tot
