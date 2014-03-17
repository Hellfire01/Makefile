#
## Makefile for test1 in /home/raynau_a/test_zone/library_test2
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Mon Oct 21 16:23:34 2013 a
## Last update Mon Mar 17 18:29:47 2014 matthieu raynaud de fitte
##

CFLAGS  =       -Wall -Wextra -g3

## ne pas ajouter de fonctions à cette lib
SRCS	= 	test.c

OBJS	= 	$(SRCS:.c=.o)

NAME	= 	libmy.a


all	:	$(NAME)
		cp libmy.a ../libmy.a
		cp my.h ../my.h

abs	:	disp2 fclean disp $(OBJS)
		@echo -e '\033[0;33m - (3/5) >> compilation de la libmy.a \033[0m'
		ar rc libmy.a $(OBJS)
		@echo -e '\033[0;33m - (4/5) >> suppression de tous les fichiers temporaires \033[0m'
		$(RM) $(OBJS)
		@echo -e '\033[0;33m - (5/5) >> copie de la libmy.a et du my.h \033[0m'
		cp libmy.a ../libmy.a
		cp my.h ../my.h

$(NAME)	:	$(OBJS)
		ar rc libmy.a $(OBJS)

disp	:
		@echo -e '\033[0;33m - (2/5) >> compilation des sources \033[0m'

disp2	:
		@echo -e ''
		@echo -e '\033[0;33m - (1/5) >> suppression des fichiers temporaires \033[0m'

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)


re	:	fclean all

.PHONY	: all disp disp2 clean fclean re tot
